# C++ STL Cheatsheet

Quick reference for the containers and algorithms used in almost every solution. All snippets assume `#include <bits/stdc++.h>` and `using namespace std;`.

## Contents

[Algorithms](#algorithms) · [Conversions](#conversions) · [String](#string) · [Char & Math](#char--math-functions) · [Vector](#vector) · [Set / Multiset](#set--unordered_set--multiset) · [Ordered Set (PBDS)](#ordered-set-pbds) · [Map](#map--unordered_map) · [Pair](#pair) · [Stack](#stack) · [Queue](#queue) · [Deque](#deque) · [Priority Queue](#priority-queue) · [Pitfalls](#pitfalls)

---

## Algorithms

- Not found ⇒ the iterator equals `v.end()`. Index of an iterator: `it - v.begin()`.
- Use `.` on an object and `->` on a pointer/iterator.
- Reverse order comparator: `greater<int>()`.
- Lambda: `auto isEven = [&](int x) { return x % 2 == 0; };`

```cpp
sort(v.begin(), v.end());                    // ascending
sort(v.rbegin(), v.rend());                  // descending
sort(v.begin(), v.end(), greater<int>());    // descending
is_sorted(v.begin(), v.end());
reverse(v.begin(), v.end());
reverse(v.begin() + l, v.begin() + r);       // [l, r)
rotate(v.begin() + l, v.begin() + m, v.begin() + r);

*max_element(v.begin(), v.end());
*min_element(v.begin(), v.end());
find(v.begin(), v.end(), x);                 // iterator, v.end() if absent
binary_search(v.begin(), v.end(), x);        // bool, needs sorted range
lower_bound(v.begin(), v.end(), x);          // first element >= x
upper_bound(v.begin(), v.end(), x);          // first element >  x

accumulate(v.begin(), v.end(), 0);           // use 0LL for long long sums
count(v.begin(), v.end(), x);
replace(v.begin(), v.end(), oldVal, newVal);
partial_sum(v.begin(), v.end(), prefix.begin());
next_permutation(v.begin(), v.end());        // false after the last one
prev_permutation(v.begin(), v.end());

// remove duplicates (sort first!)
sort(v.begin(), v.end());
v.erase(unique(v.begin(), v.end()), v.end());

all_of(v.begin(), v.end(), pred);
any_of(v.begin(), v.end(), pred);
none_of(v.begin(), v.end(), pred);           // true if no element satisfies pred
```

---

## Conversions

```cpp
// string <-> vector<char>
string str = "hello";
vector<char> arr(str.begin(), str.end());
string s(arr.begin(), arr.end());

// numbers <-> strings
string t = to_string(number);   // number -> string
int x = stoi(s);                // string -> int
long long y = stoll(s);         // string -> long long

// chars <-> numbers
int d = c - '0';                // '7' -> 7
char c2 = d + '0';              // 5 -> '5'
int ascii = (int)c;             // 'A' -> 65
char c3 = (char)ascii;          // 97 -> 'a'
int idx = c - 'a';              // lowercase letter -> 0-based index
```

Digits in $n$: `floor(log10(n)) + 1` (or `to_string(n).size()`).

---

## String

```cpp
s.front();            s.back();            // first / last char
s.empty();            s.clear();
s.push_back('x');     s.pop_back();
s.insert(pos, s2);                         // insert s2 at index pos
s.erase(pos, len);                         // erase len chars from pos
s.replace(pos, len, "new");
s.substr(pos, len);                        // len optional -> to the end
s.compare(s2);                             // <0, 0, >0 lexicographic
s.swap(s2);

s.find(str);                               // first occurrence, string::npos if none
s.find(str, pos);                          // start searching at pos
s.rfind(str);                              // last occurrence

reverse(s.begin(), s.end());
sort(s.begin(), s.end());
s.erase(remove(s.begin(), s.end(), ' '), s.end());   // drop all spaces
```

---

## Char & Math Functions

```cpp
isalpha(c) isalnum(c) isdigit(c) islower(c) isupper(c) isblank(c) ispunct(c)
toupper(c) tolower(c)

floor(x) ceil(x) round(x) trunc(x)   // trunc drops the fractional part (round toward 0)
abs(x) sqrt(x) cbrt(x) pow(a, b) exp(x) min(a, b) max(a, b)
log(x)   // base e
log2(x)  log10(x)
```

- Integer ceil: `(a + b - 1) / b` for positive `a, b`.
- `pow` returns `double`; avoid it for exact integer powers, use [binary exponentiation](../2_math/11_binary_exponentiation.md).

---

## Vector

```cpp
vector<pair<int, string>> v;      // vector of pairs
vector<vector<int>> g(n, vector<int>(m, 0));   // n x m grid

v.push_back(x);        v.pop_back();
v.size();              v.empty();      v.clear();
v.front();             v.back();
v.insert(v.begin() + pos, val);        // insert at index pos
v.insert(v.begin(), val);              // insert at front
v.erase(v.begin() + pos);              // erase one element
v.erase(v.begin() + l, v.begin() + r); // erase range [l, r)
v.erase(remove(v.begin(), v.end(), x), v.end());   // erase every x

v.resize(n);           v.assign(n, 0);
memset(arr, 0, sizeof(arr));           // plain arrays only, and only for 0 / -1
```

---

## Set / unordered_set / multiset

```cpp
set<int> s;                     // ordered, ascending
set<int, greater<int>> sd;      // ordered, descending
unordered_set<int> us;          // hash based, O(1) average
set<pair<int, int>> sp;
multiset<int> ms;               // allows duplicates

s.insert(x);
s.empty();   s.size();   s.clear();
s.find(x);                      // iterator, s.end() if absent
s.count(x);                     // 0 / 1 (multiset: the multiplicity)
s.erase(x);                     // erase by value (multiset: erases ALL copies)
s.erase(s.begin());             // erase the first element
s.erase(next(s.begin(), 2));    // erase the element at index 2
s.lower_bound(x);               // first element >= x
s.upper_bound(x);               // first element >  x
ms.erase(ms.find(x));           // multiset: erase ONE copy
```

Use the member `s.lower_bound(x)`, not `lower_bound(s.begin(), s.end(), x)`, which is $O(N)$ on a set.

---

## Ordered Set (PBDS)

See the template in [Boilerplate](1_boilerplate.md).

```cpp
os.order_of_key(k);        // number of elements strictly < k
*os.find_by_order(i);      // value at 0-based index i (it == end() if out of range)
```

---

## map / unordered_map

```cpp
map<int, int> m;                        // ordered by key
unordered_map<string, int> um;          // hash based
map<int, int, greater<int>> md;         // descending keys
multimap<int, int> mm;

m[key]++;                               // creates the key with value 0 if missing
m.insert({key, value});
m.find(key);                            // iterator, m.end() if absent
m.count(key);                           // 0 / 1
m.erase(key);
m.size();  m.empty();  m.clear();
m.lower_bound(key);                     // first key >= key
m.upper_bound(key);                     // first key >  key

for (auto &[k, v] : m) { /* ordered by key */ }
```

Ordering a map by **value**: see [Sort Map by Values](2_sort_map_by_values.md).

---

## Pair

```cpp
pair<int, string> p1 = {1, "One"};
auto p2 = make_pair(3, "Three");
p1.first;  p1.second;

vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}};

pair<int, pair<int, int>> tri = {1, {2, 3}};
tri.first;  tri.second.first;  tri.second.second;
```

Pairs compare lexicographically (`first`, then `second`), so `sort` and `set` work out of the box. For three or more fields use `tuple` or a small `struct`.

---

## Stack

```cpp
stack<int> st;          // Last In, First Out
st.push(x);
st.pop();               // removes, returns nothing
st.top();               // access top
st.empty();  st.size();

while (!st.empty()) { cout << st.top() << " "; st.pop(); }   // iterate
```

---

## Queue

```cpp
queue<int> q;           // First In, First Out
q.push(x);              // insert at back
q.pop();                // remove from front
q.front();  q.back();
q.empty();  q.size();
```

---

## Deque

```cpp
deque<int> dq;
dq.push_back(x);   dq.push_front(x);
dq.pop_back();     dq.pop_front();
dq.front();        dq.back();
dq.empty();        dq.size();
dq[i];             // random access
```

---

## Priority Queue

```cpp
priority_queue<int> pq;                                   // max heap
priority_queue<int, vector<int>, greater<int>> mn;        // min heap

pq.push(10);  pq.push(5);  pq.push(20);
pq.top();       // 20
pq.pop();       // removes 20
pq.empty();  pq.size();
```

For pairs, a min-heap is `priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>` (as used in [Dijkstra](../6_graphs/5_dijkstra.md)).

---

## Pitfalls

- `unique()` removes only **consecutive** duplicates, so `sort()` first.
- `binary_search`, `lower_bound`, `upper_bound` need a sorted range.
- `accumulate(v.begin(), v.end(), 0)` sums in `int`; pass `0LL` for `long long`.
- `pop()` on an empty stack/queue/heap is undefined behaviour. Check `empty()`.
- `m[key]` on a `map` **inserts** a default entry when the key is missing. Use `count`/`find` to only test.
- `__builtin_clz(0)` and `__builtin_ctz(0)` are undefined.
- `v.size()` is unsigned: `v.size() - 1` underflows for an empty vector. Cast with `(int)v.size()`.

[Boilerplate Template](1_boilerplate.md)

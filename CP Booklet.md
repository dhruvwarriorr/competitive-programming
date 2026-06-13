**`PREFIX SUM`**   
`vector<int> prefix(n);`  
`prefix[0] = arr[0];`

`for (int i = 1; i < n; i++)`  
    `prefix[i] = prefix[i - 1] + arr[i];`

`int rangeSum(int L, int R, vector<int>& prefix) {`  
    `if (L == 0) return prefix[R];`  
    `return prefix[R] - prefix[L - 1];`  
`}` 

**`2D PREFIX SUM`**

`vector<vector<int>> buildPrefix(vector<vector<int>>& a) {`  
    `int n = a.size(), m = a[0].size();`  
    `vector<vector<int>> pre(n, vector<int>(m, 0));`

    `for (int i = 0; i < n; i++) {`  
        `for (int j = 0; j < m; j++) {`  
            `pre[i][j] = a[i][j];`  
            `if (i > 0) pre[i][j] += pre[i - 1][j];`  
            `if (j > 0) pre[i][j] += pre[i][j - 1];`  
            `if (i>0 && j>0) pre[i][j] -= pre[i-1][j-1];`  
        `}`  
    `}`  
    `return pre;`  
`}`

`int query(int l1, int r1, int l2, int r2, vector<vector<int>>& pre){`  
    `int res = pre[l2][r2];`  
    `if (l1 > 0) res -= pre[l1 - 1][r2];`  
    `if (r1 > 0) res -= pre[l2][r1 - 1];`  
    `if (l1 > 0 && r1 > 0) res += pre[l1 - 1][r1 - 1];`  
    `return res;`  
`}`

**`SUFFIX SUM`**

`vector<long long> sfx(n + 1, 0);`

`for(int i = n - 1; i >= 0; i--){`  
    `sfx[i] = sfx[i + 1] + a[i];`  
`} // 0 based`

`vector<long long> sfx(n + 2, 0);`

`for(int i = n; i >= 1; i--) {`  
    `sfx[i] = a[i - 1] + sfx[i + 1];`  
`} // 1 based`

**`DIFFERENCE ARRAYS`**

`vector<int> diff(n + 1, 0); //0 based`

`diff[L] += X;`  
`diff[R + 1] -= X;`

`vector<int> arr(n, 0);`  
`arr[0] = diff[0];`

`for (int i = 1; i < n; i++)`  
    `arr[i] = arr[i - 1] + diff[i];`

`OR` 

`for (int i = 1; i < n; i++)`  
    `diff[i] += diff[i - 1];`

**`SUBARRAY SUM`**

`Used to count number of subarrays with sum = K`

`map<int,int> mp;`  
`mp[0] = 1;`  
`int sum = 0, cnt = 0;`

`for (int x : arr) {`  
    `sum += x;`  
    `cnt += mp[sum - k];`  
    `mp[sum]++;`  
`}`

`Return cnt;`

*`sum: keeps track of the prefix sum up to index i.`*  
*`mp: stores how many times each prefix sum has appeared so far.`*  
*`mp[sum] = number of subarrays that have prefix sum equal to sum.`*  
*`ans: total count of subarrays whose sum is equal to x.`*

**`TWO POINTER`**

`//Works only for sorted arrays`

`bool twoSumSorted(const vector<int>& arr, int target) {`  
    `int n = arr.size();`  
    `if (n < 2) return false;`  
    `int l = 0, r = n - 1;`  
    `while (l < r) {`  
        `int sum = arr[l] + arr[r];`  
        `if (sum == target) return true;`  
        `else if (sum < target)l++;`             
`else r--;`     
    `}`  
    `return false;`  
`}`

**`SLIDING WINDOWS`**  
`//k - size of subarray`  
`int maxSumSubarray(int arr[], int n, int k) {`  
    `int currSum = 0;`  
    `for (int i = 0; i < k; i++) currSum += arr[i];`

    `int maxSum = currSum;`

    `for (int i = k; i < n; i++) {`  
        `currSum += arr[i];`       
        `currSum -= arr[i - k];`    
        `maxSum = max(maxSum, currSum);`  
    `}`

    `return maxSum;`  
`}`

**`SIEVE OF ERATOSTHENES`**  
`Vector <int> sieve(int n) {`  
    `vector<bool> isPrime(n + 1, true);`  
    `isPrime[0] = isPrime[1] = false;`

    `for (int i = 2; i * i <= n; i++) {`  
        `if (isPrime[i]) {`  
            `for (int j = i * i; j <= n; j += i)`  
                `isPrime[j] = false;`  
        `}`  
    `}`

    `vector<int> primes;`  
    `for (int i = 2; i <= n; i++) {`  
        `if (isPrime[i]) primes.push_back(i);`  
    `}`  
    `return primes;`  
`}`

**`SMALLEST PRIME FACTOR`**

`Vector <int> sievespf(int n) {`  
    `vector<int> spf(n + 1);`

    `for (int i = 0; i <= n; i++)`  
        `spf[i] = i;`

       
    `for(int i = 2; i * i <= n; i++) {`  
        `if(spf[i] == i) {           // i is prime`  
            `for(int j = i * i; j <= n; j += i) {`  
                `if(spf[j] == j)`  
                    `spf[j] = i;`  
            `}`  
        `}`  
    `}`  
    `return spf;`  
`}`

**`DISTINCT PRIME FACTOR`**

`vector<int> prime_factor;`

`for (int i = 2; i * i <= n; i++) {`  
    `if (n % i == 0) {`  
`prime_factor.push_back(i);`

        `while (n % i == 0) {`  
             `n /= i;`  
        `}`

    `}`  
`}`

`if (n > 1) {`  
    `prime_factor.push_back(n);`  
`}`

**`EFFICIENT PRIME FACTOR USING SPF`**

`vector<pair<int, int>> primeFactorization(int x, vector<int>& spf) {`  
    `vector<pair<int, int>> ans;`

    `while (x != 1) {`  
        `int prime = spf[x];`  
        `int cnt = 0;`

        `while (x % prime == 0) {`  
            `cnt++;`  
            `x = x / prime;`  
        `}`

        `ans.push_back({prime, cnt});`  
    `}`

    `return ans;`  
`}`

`void solve() {`  
    `int maxN = 1e6;`

    `vector<bool> isPrime(maxN, true);`  
    `vector<int> spf(maxN, 1e9);`

    `for (long long i = 2; i < maxN; i++) {`

        `if (isPrime[i]) {`

            `spf[i] = i;`

            `for (long long j = i * i; j < maxN; j += i) {`  
                `isPrime[j] = false;`  
                `spf[j] = min(spf[j], (int)i);`  
            `}`  
        `}`  
    `}`

    `vector<pair<int, int>> primeF = primeFactorization(36, spf);`  
`}`

**`SMALLEST PRIME FACTOR OF SINGLE NUMBER`**

`int spf(int n) {`  
    `if (n <= 1) return n;`  
    `for (int i = 2; i * i <= n; i++) {`

        `if (n % i == 0) return i;`  
    `}`  
    `return n;`  
`}`

**`KADANE ALGORITHM`**

`Find the maximum sum of any contiguous subarray.`

`long long maxSubarraySum(int arr[], int n) {`  
    `long long sum = 0;`  
    `long long ans = LLONG_MIN;`

    `for (int i = 0; i < n; i++) {`  
        `sum += arr[i];`  
        `ans = max(ans, sum);`  
        `if (sum < 0) sum = 0;`  
    `}`  
    `return ans;`  
`}`

**`PRIME NUMBER CHECK`**

`bool isPrime(int n) {`  
    `if (n <= 1) return false;`  
    `for (int i = 2; i * i <= n; i++) {`  
        `if (n % i == 0)`  
            `return false;`  
    `}`  
    `return true;`  
`}`

**`FACTORS OF NUMBER`**

`vector<int> getFactors(int n) {`  
    `vector<int> factors;`

    `for (int i = 1; i * i <= n; i++) {`  
        `if (n % i == 0) {`  
            `factors.push_back(i);`

            `if (i != n / i) factors.push_back(n / i);`  
        `}`  
    `}`  
    `return factors;`  
`}`

**`FACTORIAL`**

`int factorial(int n) {`  
    `int result = 1;`  
    `for (int i = 2; i <= n; i++) {`  
        `result *= i;`  
    `}`  
    `return result;`  
`}`

`int factorial(int N) {`  
    `fact[0] = 1;`

     `for(int i = 1; i <= N; i++) {`  
 `fact[i] = fact[i - 1] * i;`  
     `}`  
`}`

**`INVERSE FACTORIAL`**

`invfact[N] = binexp(fact[N]);`

`for (int i = N - 1; i >= 0; i--) {`  
    `invfact[i] = invfact[i + 1] * (i + 1);`  
`}`

**`OPTIMISED nCr`**

`void init() {`  
`fact[0] = 1;`

    `for (int i = 1; i <= N; i++){`  
    `fact[i] = fact[i - 1] * i % MOD;`  
    `}`

    `invfact[N] = binexp(fact[N], MOD - 2);`

    `for (int i = N - 1; i >= 0; i--){`  
     `invfact[i] = invfact[i + 1] * (i + 1) % MOD;`  
    `}`  
`}`

`long long nCr(int n, int r) {`  
    `if (r < 0 || r > n)return 0;`

   `return fact[n] * invfact[r] % MOD * invfact[n - r] % MOD;`  
`}`

**`BINARY EXPONENTIATION`**

`int binpow(int a, int b) {`  
    `int ans = 1;`  
    `while(b){`  
        `if(b&1){`  
            `ans = (1LL*ans*a)%MOD;`  
        `}`  
        `a = (1LL*a*a)%MOD;`  
        `b >>= 1;`  
    `}`  
      
    `return ans;`  
`}`

`int binpowRecur(int a, int b) {`

 `if(b == 0) return 1;`

 `int res = binpowRecur(a, b / 2);`

 `if(b & 1) {`  
    `return (a * ((res * res) % M)) % M;`  
 `}`  
 `else {`  
    `return (res * res) % M;`  
 `}`  
`}`

**`nCr`**

`long long fact(int n) {`  
    `long long f = 1;`  
    `for (int i = 1; i <= n; i++) f *= i;`  
    `return f;`  
`}`

`long long nCr(int n, int r) {`  
    `if (r > n) return 0;`  
    `return fact(n) / (fact(r) * fact(n - r));`  
`}`

**`BINARY SEARCH`**

`int binary_search(vector<int> &a, int target) {`  
    `int low = 0, high = a.size() - 1;`

    `while (low <= high) {`  
        `int mid = low + (high - low) / 2;`

        `if (a[mid] == target) return mid;`               
        `else if (a[mid] < target) low = mid + 1;`  
        `else high = mid - 1;`  
    `}`  
    `return -1;`   
`}`

**`LOWER BOUND`**

`int lower_bound_index(vector<int>& a, int target) {`  
    `int low = 0;`  
    `int high = a.size() - 1;`  
    `int ans = a.size();`

    `while (low <= high) {`  
        `int mid = low + (high - low) / 2;`

        `if (a[mid] >= target) {`  
            `ans = mid;      // possible answer`  
            `high = mid - 1;`  
        `} else {`  
            `low = mid + 1;`  
        `}`  
    `}`

    `return ans;`  
`}`

**`UPPER BOUND`**

`int upper_bound_index(vector<int>& a, int target) {`  
    `int low = 0;`  
    `int high = a.size() - 1;`  
    `int ans = a.size();`

    `while (low <= high) {`  
        `int mid = low + (high - low) / 2;`

        `if (a[mid] > target) {`  
            `ans = mid;      // possible answer`  
            `high = mid - 1;`  
        `} else {`  
            `low = mid + 1;`  
        `}`  
    `}`

    `return ans;`  
`}`

**`MERGE SORT`**

`void merge(vector<int> &arr, int left, int mid, int right)`  
`{`  
    `int n1 = mid - left + 1;`  
    `int n2 = right - mid;`

    `vector<int> l(n1), r(n2);`

    `for (int i = 0; i < n1; i++) l[i] = arr[left + i];`  
    `for (int i = 0; i < n2; i++) r[i] = arr[mid+1 + i];`  
      
    `int i = 0, j = 0, k = left;`

    `while (i < n1 && j < n2) {`  
        `if (l[i] <= r[j]) arr[k++] = l[i++];`  
        `else arr[k++] = r[j++];`      
    `}`

    `while (i < n1) arr[k++] = l[i++];`   
    `while (j < n2) arr[k++] = r[j++];`  
`}`

`void mergeSort(vector<int> &arr, int left, int right)`  
`{`  
    `if (left >= right) return;`

    `int mid = left + (right - left) / 2;`

    `mergeSort(arr, left, mid);`  
    `mergeSort(arr, mid + 1, right);`  
    `merge(arr, left, mid, right);`  
`}`

**`QUICK SORT`**

`int partition(vector<int> &arr, int low, int high)`  
`{`  
    `int pivot = arr[high];`  
    `int i = low - 1;`

    `for (int j = low; j < high; j++)`  
    `{`  
        `if (arr[j] < pivot)`  
        `{`  
            `i++;`  
            `swap(arr[i], arr[j]);`  
        `}`  
    `}`

    `swap(arr[i + 1], arr[high]);`  
    `return i + 1;`  
`}`  
`void quickSort(vector<int> &arr, int low, int high)`  
`{`  
    `if (low < high)`  
    `{`  
        `int pivotIndex = partition(arr, low, high);`  
        `quickSort(arr, low, pivotIndex - 1);`  
        `quickSort(arr, pivotIndex + 1, high);`  
    `}`  
`}`

**`BINARY SEARCH ON ANSWERS`**

`// check if "mid" is a valid answer`  
`bool check(ll mid, vector<ll> &a, ll k){`  
    `ll cnt = 1;`  
    `ll sum = 0;`

    `for(ll x : a){`  
    
        `if(sum + x > mid){`  
            `cnt++;`  
            `sum = x;`  
        `} else {`  
            `sum += x;`  
        `}`  
        `if(x > mid) return false;   // impossible`  
        `if(cnt > k) return false;`  
    `}`

    `return true;`  
`}`

*`while(low<high){`*  
        *`ll mid = (low+high)/2;`*  
          
        *`if(!check(mid,a,k)){`*  
            *`low = mid+1;`*  
        *`}`*  
        *`else high = mid;`*  
             
    *`}`*  
    *`Return low;`*  
      
`int main(){`  
     
    `ll low = *max_element(a.begin(), a.end());`        
    `ll high = accumulate(a.begin(), a.end(), 0LL);`   
    `ll ans = high;`  
	  
   `// K - no  of partitions`

    `while(low <= high){`  
        `ll mid = low + (high - low) / 2;`

        `if(check(mid, a, k)){`  
            `ans = mid;`  
            `high = mid - 1;`           
       `} else {`  
            `low = mid + 1;            }`  
        `}`

    `cout << ans << '\n';`  
`}`

**`BINARY SEARCH ON DECIMALS`**

`void solve() {`  
      
    `// x = number whose square root we want to find`  
    `double low = 0, high = x;`  
    `double ans = 0;`  
      
    `double precision = 1e-12;`   
    
    `int iterations = 100;`

    `for(int i = 0; i < iterations; i++) {`  
          
        `double mid = (low + high) / 2;`  
       
        `if (mid * mid <= x) {`  
            `ans = mid;`                
            `low = mid + precision;`   
        `} else {`  
           
            `high = mid - precision;`   
        `}`  
    `}`

    `cout << fixed << setprecision(18) << ans << '\n';`

`}`

**`ALGORITHM`**  
`If not found - returns v.end()`  
`To get index - it - v.begin()`  
`To reverse -  greater <int>()`  
`Lambda -> auto isEven = [&](int x)->bool{return x%2 == 0;};`  
`Use . when you have an object.`  
`Use -> when you have a pointer (or iterator).`

`sort(v.begin(), v.end())`  
`sort(v.rbegin(),v.rend())`  
`is_sorted(v.begin(), v.end())`  
`reverse(v.begin(), v.end());`  
`reverse(v.begin() + , v.begin() + r); // [l, r)`  
`rotate(v.begin() + l, v.begin() + m, v.begin() + r);`  
`*max_element(v.begin(),v.end())`  
`*min_element(v.begin(),v.end())`  
`*binary_search(v.begin(),v.end(),x)`  
`*find(v.begin(), v.end(), x);`  
   
`*lower_bound(v.begin(), v.end(), x)`   
`*upper_bound(v.begin(), v.end(), x);`   
`accumulate(v.begin(),v.end(),0) count(v.begin(),v.end(),x) `   
`replace(v.begin(), v.end(), oldVal, newVal);`  
`partial_sum(v.begin(), v.end(), prefix.begin());`  
`next_permutation(v.begin(), v.end())`   
`prev_permutation(v.begin(), v.end())`  
`unique(v.begin(),v.end()) - remove consecutive unique elements`

`auto it = unique(v.begin(), v.end());`  
`v.erase(it, v.end()); //removes duplicate`

`all_of(v.begin(),v.end(),Lambda);`   
`any_of(v.begin(),v.end(),Lambda);`  
`none_of(v.begin(),v.end(),Lambda); //true if no element satisfy`

**`OTHERS`**  
   
`String to Vector ->`  
`string str = "hello";`  
`vector<char> arr(str.begin(), str.end());`  
`arr.push_back('\0');   // null-terminate`

`Vector -> String`  
`vector<char> v = {'h','e','l','l','o'};`  
`string s(v.begin(), v.end());`

`string str = to_string(number) -> Integer to String`  
`int x = stoi(s); -> Integer to String`

`Char to Number ->`  
`char c = '7';`  
`int x = c - '0';   // 7`

`Number to Char ->`  
`int x = 5;`  
`char c = x + '0';   // '5'`

`Ascii to Char ->`  
`int ascii = 97;`  
`char c = (char)ascii;   // 'a'`

`Char to Ascii ->`  
`char c = 'A';`  
`int ascii = (int)c;`

`Lowercase letter into a 0-based index -> c - 'a';`

`Number of digits in n - floor(log10(n) + 1);`

`long long ans = max({a, (long long)b, (long long)c});`  
   
**`STRING`**

* `str.front()  -> 1st char`  
* `str.back()  -> Last char`  
* `str.empty() -> Check`  
* `str.clear() -> Clear`  
* `s1.insert(pos, s2);   -> Inserts s2 at index 6 of s1`  
* `str.erase(pos,len) -> Erase`  
* `str.push_back('x')`  
* `str.pop_back()`  
* `str.compare(str2) -> Compare the string lexi`  
* `str.replace(pos,len,char)`  
* `str.swap(str2)`  
* `s.find(str);       // first occurrence`  
* `s.find(str, pos);  // start search from pos`  
* `s.rfind(str);       // search from end`  
* `str.substr(pos,len)`  
* `reverse(s.begin(), s.end());`  
* `sort(s.begin(), s.end());`  
* `s.rfind("pattern")  -> Finds from the end`  
* `stoi(s) -> Convert to Integer`  
* `stoll(s)  -> Convert to Long Long`  
* `to_string(x) -> Number to String`  
* `s.erase(remove(s.begin(),s.end(),' '), s.end());`

   
**`CHAR`**

* `isalpha(), isblank(), islower(), isupper(), isdigit(), toupper(), tolower(), isalnum(),ispunct()`

   
**`MATH FUNCTIONS`**  
 

* `floor(), ceil(), abs(), exp(), pow(a,b), round(), sqrt(), cbrt(), min(a,b), max(a,b)`  
* `Ceil - (a+b-1)/b`  
* `log() - base e`  
* `log2(), log10()`  
* `trunc(x) - removes the decimal part (ron rounding)`

**`ITERATORS`**

`for (auto it = v.begin(); it != v.end(); it++)`

`for (auto it = s.rbegin(); it != s.rend(); it++)`  
    

**`VECTORS`**

`Vector of pair - vector<pair<int,string>> v;`

`v.push_back(x);      // Add element at end`  
`v.pop_back();        // Remove last element`  
`v.size();            // Number of elements`  
`v.empty();           // true if empty`  
`v.clear();           // Remove all elements`  
`v.front();           // First element`  
`v.back();            // Last element`  
`v.insert(v.begin() + pos, val);  // Insert at index pos`  
`v.insert(v.begin(), val);        // Insert at front`  
`v.insert(v.end(), val);          // Insert at end`  
`v.erase(v.begin() + pos);        // Erase one element`  
`v.erase(v.begin()+l,v.begin()+r) // Erase range [l, r)`

`v.erase(remove(v.begin(),v.end(),x),v.end())-Erase all X`

**`SET/UNORDERED SET/ MULTISET`**

`set<int> s;                // Ordered, ascending`  
`set<int, greater<int>> s   // Ordered, descending`  
`unordered_set<int> us;     // Unordered, hash-based`  
`set<pair<int,int>> s;`  
`multiset<int> ms;          // ascending order`

`s.insert(x);`

`s.empty();   // true / false`  
`s.size();    // number of elements`  
`s.find(x);       // iterator to x or s.end()`  
`s.count(x);      // 1 if exists, else 0`  
`s.erase(x);             // erase by value`  
`s.erase(s.begin());     // erase first element`  
`s.erase(next(s.begin(),2)); // erase element at index 2 (0-based)`  
`s.clear();   // removes all elements`  
`s.lower_bound(x);   // first element >= x`  
`s.upper_bound(x);   // first element > x`

   
**`MAP/UNORDERED MAP`**  
   
`map<int, int> m;                      unordered_map<string, int> um;`   
`map<int, int, greater<int>> m;`        
`multimap<int, int> mm;     // ascending order`

`m.insert({key, value});`  
`m.find(key);     // iterator or m.end()`  
`m.count(key);    // 0 or 1`   
`m.size();`  
`m.empty();`  
`m.clear();`  
`auto it = m.lower_bound(key);  // first key >= key`  
`auto it = m.upper_bound(key);  // first key > key`

`for (auto &p : m)`  
    `cout << p.first << " " << p.second << "\n";`

**`PAIR`**  
   
`pair<int, string> p1 = {1, "One"};`  
`auto p2 = make_pair(3, "Three");`

`pair<int, int> p;`  
`p.first = 10;`  
`p.second = 20;`

`vector<pair<int,int>> v = {{1,2}, {3,4}, {5,6}};`

`pair<int, pair<int,int>> tri = {1, {2, 3}};`  
`tri.first;`  
`tri.second.first;`  
`tri.second.second;`

**`STACK`**

`stack <int> st; // Last in, First out`

`st.push(x);        // insert element`  
`st.pop();          // remove top element`  
`st.top();          // access top element`  
`st.empty();        // check if empty`  
`st.size();         // number of elements`

`ITERATING`

`while (!st.empty()) {`  
    `cout << st.top() << " ";`  
    `st.pop();`  
`}`

**`QUEUE`**

`queue <int> q;   // First in,first out`

`q.push(x);      // insert at back`  
`q.pop();        // remove from front`  
`q.front();      // first element`  
`q.size();       // number of elements`  
`q.empty();      // true if empty`

**`DEQUE`**

`deque <int> dq;`

`dq.push_back(x);`  
`dq.push_front(x);`  
`dq.pop_back();`  
`dq.pop_front();`  
`dq.front();`  
`dq.back();`  
`dq.empty();`  
`dq.size();`

**`PRIORITY QUEUE`**

`priority_queue<int> pq;   // max heap`  
`priority_queue<int, vector<int>, greater<int>> pq0;`    
`// min heap`

`pq.push(10);`  
`pq.push(5);`  
`pq.push(20);`

`pq.top();    // 20`  
`pq.pop();    // removes 20`

**`BOILERPLATE`**

`#include <bits/stdc++.h>`  
`using namespace std;`

`int main() {`     
    `ios::sync_with_stdio(false);`  
    `cin.tie(0);`     
`}`

**`MATH FORMULAS`**

`Sum of N natural numbers - n*(n+1)/2`  
`Sum of N odd numbers - n2`  
`Sum of N even numbers - n*(n+1)`  
`Sum of squares of first n numbers - n*(n+1)*(2n+1)/6`  
`Sum of cubes of first n numbers - (n*(n+1)/2)²`  
`AP Nth term - aₙ = a₁ + (n - 1)d`  
`AP Sum of Nth term - n/2 × [2a₁ + (n - 1)d]`  
`AP Middle term = a₁ + (n−1)/2 × d`  
`GP Nth Term - aₙ = a₁ × r^(n - 1)`  
`GP Sum of N terms - a₁ × (rⁿ - 1) / (r - 1)`  
`Power of 2 check → (n > 0) && ((n & (n - 1)) == 0)`  
`Area of Equilateral triangle - √3 / 4 × side²`  
`Area of Parallelogram -` `base × height`  
`Area of Sector of circle - (θ / 360) × πr²`  
`Area of Trapezium → ½ × (a + b) × height`

**`VOLUME FORMULAS`**   
`Cube → side³`  
`Cuboid → l × b × h`  
`Sphere → 4/3 × πr³`  
`Hemisphere → 2/3 × πr³`  
`Cylinder → πr²h`  
`Cone → 1/3 × πr²h`

## **`PERIMETER`** 

`Circumference of circle → 2πr`  
`Total surface area of cube → 6a²`  
`Lateral surface area of cube → 4a²`  
`Curved surface area of cylinder → 2πrh`  
`Total surface area of sphere → 4πr²`

## **`COORDINATE GEOMETRY`**

## `Distance between two points → √[(x₂ − x₁)² + (y₂ − y₁)²]` `Midpoint → ((x₁ + x₂)/2 , (y₁ + y₂)/2)` `Area of triangle (coordinates) → ½ |x₁(y₂ − y₃) + x₂(y₃ − y₁) + x₃(y₁ − y₂)|`

# **`LOGARITHMS`** 

* `logₐ(b) = x ⇔ aˣ = b`  
* `log(a × b) = log a + log b`  
* `log(a / b) = log a − log b`  
* `log(aᵏ) = k log a`  
* `logₐ(b) = log b / log a (base change)`  
* `Number of digits in n → ⌊log₁₀(n)⌋ + 1`  
* `Digits of n! → ⌊log₁₀(1) + log₁₀(2)+ … +log₁₀(n)⌋+ 1`  
* `log₂(n) → number of times you can divide n by 2`

# 

# **`PERMUTATION AND COMBINATION`**

`![][image1]`

`![][image2]`

`![][image3]`

`![][image4]`

`![][image5]![][image6]![][image7]`

`nCr is maximum when r = n/2`

`![][image8]`

**`ARRANGEMENTS`**

`![][image9]![][image10]`

**`STARS AND BARS`**

`Distribute n identical objects into k distinct boxes`

`Ex - **|*|**`

`![][image11]`

`![][image12]![][image13]`

# 

# 

# 

# 

# 

# **`PROBABILITY`**

`![][image14]![][image15]`

* `Independent → P(A ∩ B) = P(A) × P(B)`  
* `Dependent  → P(A ∩ B) = P(A) × P(B|A)`  
* `Mutually exclusive → P(A ∪ B) = P(A) + P(B)`

`P(A ∪ B) = P(A) + P(B) − P(A ∩ B)`

`EXPECTATION - Weighted average of all outcomes.`

`![][image16]`

`LINEARITY OF EXPECTATION`   
`![][image17]`  
`![][image18]`  
`Linearity works EVEN IF variables are dependent.`

**`MODULAR ARITHMETIC`**

`a%b ≤ a/2  – for a ≥ b`

`(a + b) % MOD = ((a % MOD) + (b % MOD)) % MOD`

`(a - b) % MOD = ((a % MOD) - (b % MOD) + MOD) % MOD`

`(a * a) % MOD = ((a % MOD) * (b % MOD)) % MOD`

`(a / b) % MOD = ((a % MOD) * ((b-1) % MOD)) % MOD`

`(b-1) % MOD = (bMOD-2) % MOD`

**`Fermat’s Little Theorem (FLT):`**

`If m is a prime and a is not divisible by m:`

`![][image19]         ![][image20]`

**`GCD`**

* `gcd(a,b) or __gcd(a,b)`

`If m is any integer, then gcd(a,b) = gcd(a+m*b,b)`

`GCD of a,b,c = GCD(a, GCD(b,c))`

* `gcd(a,0) = a`  
* `gcd(a,1) = 1`  
* `gcd(a,b) = gcd(b,a)`  
* `gcd(a,b) = gcd(a,a+b)`  
* `gcd(a,b) = gcd(b,a % b)`  
* `gcd(a,b) = gcd(b,a-b)`  
* `gcd(a,b) = gcd(a,b−ka)`  
* `gcd(ka,kb) = k·gcd(a,b)`  
* `gcd(a,b) = 1 ⇒ a,b are coprime`  
* `gcd(n,n+1) = 1`  
* `gcd(a,b)≤ min(a,b)`  
* `gcd(am,an)=amin(m,n)`

`![][image21]`

**`LCM`**

`LCM(a,b) * GCD(a,b) = a * b`

* `lcm(a,0)=0`  
* `lcm(a,1) = a`  
* `lcm(a,b) ≥ max(a,b)`  
* `lcm(a,b) = max(a,b) if one divides the other`  
* `IF gcd(a,b) = 1 then lcm(a,b) = a * b`  
* `lcm(am,an)=amax(m,n)`

**`Pigeonhole principle`** `states that if n pigeons are in m holes and n > m, then at least one hole has more than one pigeon.`

**`DIVISIBILITY RULE`**

`2 - last digit is one of the following: 0, 2, 4, 6, or 8`

`3 - sum of its digits is divisible by 3.`

`4 - last two digits are divisible by 4`

`5 - last digit of that number is either 0 or 5.`

`6 - number is divisible by both 2 and 3.`

`7 - Double last digit and subtract from rest. If result divisible by 7 or 0 → ✅`

`8 -  last three digits of the number are divisible by 8.` 

`9 - Sum of digits divisible by 9`

`10 - Ends with 0` 

`11 - Difference between sum of odd and even positioned digits is 0 or multiple of 11`

`12 - Divisible by 3 and 4`

`25 - Last 2 digits 00, 25, 50, 75`

`100 - Last 2 digits 00`

**`BIT MANIPULATION`**

**`Left shift (<<) -`** `Multiplies by 2`  
**`Right shift (>>) -`** `Divides by 2`  
**`AND (&) -`** `1 if both bits are 1`  
**`OR (|) -`** `1 if any bit is 1`  
**`XOR (^) -`** `1 if bits differ`  
**`NOT (~) -`** `Inverts all bits`

**`After subtracting 1 from a number, all bits from the rightmost set bit onward get toggled (including that set bit).`**

**`After adding 1 to a number, all bits from the rightmost unset bit onward get toggled (including that unset bit).`**

`COMMON BIT TRICKS`

`If A^B = C , then A^C = B and B^C = A`  
`A & B ≤ MIN(A,B)`   
`A | B ≥ MAX(A,B)`  
`A + B = (A ^ B) + 2(A & B)`  
`A + B = (A | B) + (A & B)`

`IF no of set bits in A = X`  
`IF no of set bits in B = Y`  
`No. of set bits in (A^B) = Z`  
`Z is even if X+Y is even`  
`Z is odd if X+Y is odd`

`log2(n) gives the exponent of the highest power of 2 less than or equal to n`

`Check the parity:`  
`if(x & 1) == 1 // x is odd`   
          `== 0 // x is even`

`Count number of bits in a number:`  
`log2(n)+1;`

`Check the kth bit:`  
`if(x & (1<<k)) != 0  // kth bit is set`  
		`== 0  // kth bit is not set`

`Set ith bit:`  
`x = x | (1 << i);`

`Unset the Kth bit`  
`x = x & ~(1<<k)` 

`Toggle ith bit:`  
`x = x ^ (1 << i);`

`Check power of 2:`  
`if((x & (x-1)) == 0) // YES`  
		`> 0  // NO`

`Turn off the rightmost set bit:`  
`n = n & (n - 1)`

`//all bits after rightmost set bit gets toggled including that set bit after subtraction`

`Get the rightmost unset bit: // 0 based`  
`X = __builtin_ctz((~n) & (n + 1));`

`//all bits after rightmost unset bit gets toggled including that unset bit after addition`

`Get the Kth bit: (1 based)`  
`X = (n >> (k-1)) & 1` 

**`FORMULA -`** `(a ⊕ (a & b)) + (b ⊕ (a & b)) =  a ⊕ b`

`__builtin_popcount() OR __builtin_popcountll() - count the number of set bits`

`__builtin_clz() OR __builtin_clzll() - count the leading zeros` 

`__builtin_ctz() OR __builtin_ctzll() - count the trailing zeros`

`__builtin_ffs(x) - Finds the position of the first (lowest) set bit.// 1-based`

`__builtin_parity(x) - Returns parity of number of set bits.`  
`Returns 1 → odd number of set bits`  
`Returns 0 → even number of set bits`

**`COUNT THE SET BITS`**

`int countSetBits(int n) {`  
    `int cnt = 0;`  
    `while (n > 0) {`  
        `n = n & (n - 1);  // removes lowest set bit`  
        `cnt++;`  
    `}`  
    `return cnt;`  
`}`

**`LOWEST SET BIT POSITION`**

`int lowestSetBitPos(int n) {`  
    `int pos = 0; // 0 based index`  
    `while ((n & 1) == 0) {`  
        `n >>= 1;`  
        `pos++;`  
    `}`  
    `return pos;`  
`}`

**`HIGHEST SET BIT POSITION`**

`int highestSetBitPos(int n) {`  
    `int pos = -1; // 0 based`   
    `while (n > 0) {`  
        `pos++;`  
        `n >>= 1;`  
    `}`  
    `return pos;`  
`}`

**`LOWEST UNSET BIT POSITION`**

`int firstUnsetBitIndex(int n) {`  
    `int idx = 0;`  
    `while (n & 1) {`  
        `n >>= 1;`  
        `idx++;`  
    `}`  
    `return idx;`  
`}`

**`HIGHEST UNSET BIT POSITION`**

`int lastUnsetBitIndex(int n) {`  
    `for (int i = 31; i >= 0; i--) {`  
        `if (((n >> i) & 1) == 0)`  
            `return i;`  
    `}`  
    `return -1; // all bits are set (n == -1)`  
`}`

**`HIGHEST UNSET BIT AMONG SIGNIFICANT BITS`**  
`int highestUnsetBit(int n) {`  
    `int pos = 0;`  
    `int ans = -1;`

    `while (n) {`  
        `if ((n & 1) == 0)`  
            `ans = pos;`

        `pos++;`  
        `n >>= 1;`  
    `}`

    `return ans;`  
`}`

**`GENERATE ALL SUBSET USING BITMASKING`**

`void generateSubsets(vector<int>& a) {`  
    `int n = a.size();`

    `for (int mask = 0; mask < (1 << n); mask++) {`  
        `for (int i = 0; i < n; i++) {`  
            `if (mask & (1 << i)) {`  
                `cout << a[i] << " ";`  
            `}`  
        `}`  
        `cout << '\n';`  
    `}`  
`}`

**`BITSET`**

`bitset<n> name;`

`n is the number of bits to allocate, and name is the name assigned.`

`bitset<size> variable_name("BINARY_STRING");`

``bitset<size> variable_name(DECIMAL_NUMBER)` - Bitset will represent the given decimal number in binary form.``

`count() :- Count the number of set bits in bitset.`

`flip() :- Flip the bit at given index.`

`any() , none() , all() :- Checks whether any / none / all bits are set.`

`set() :- Set the bit at given index to 1.`  
`reset() :- Set the bit at given index to 0.`  
`size():- Returns the size of bitset`  
``test()` - tests whether the bit at a given index is set or not``

**`Encode and decode`**

`encoded = popcount * BASE + value`

`![][image22]`

`encoded = 2 * 10001 + 5 = 20007`  
`20007 % 10001 = 5`

 `Original value recovered exactly.`

`BASE must be strictly greater than the maximum possible value of the secondary key. Secondary means value here`

`![][image23]`

`No of Substring - n*(n+1) / 2`

**`Power of x in n!= n/x + n/x2 + n/x3 +...`**

`Int power_in_factorial(int n, intp) {`  
    `int cnt = 0;`  
      
    `while (n > 0) {`  
        `n /= p;`  
        `cnt += n;`  
    `}`  
      
    `return cnt;`  
`}`

**`Power of x in n`**

`int power(int n, int x) {`  
    `int cnt = 0;`  
    `while (n % x == 0) {`  
        `n /= x;`  
        `cnt++;`  
    `}`  
    `return cnt;`  
`}`

`smallest multiple of i ≥ L == ((L + i - 1) / i) * i`

**`Sort map by values`**

`map<int, int> mp = {{1, 5}, {2, 3}, {3, 8}};`

`// move to vector`  
`vector<pair<int, int>> v(mp.begin(), mp.end());`

`// sort by value using lambda`  
`sort(v.begin(), v.end(), [](const pair<int,int> &a, const pair<int,int> &b) {`  
    `return a.second < b.second;  // ascending by value`  
`});`

# **`Rotational Symmetry - 90° clockwise`**

`(i, j) -> (j, n - i - 1)`

# **`Mirror Symmetry - Left to Right`**

`(i, j) -> (i, n - j - 1)`

`![][image24]`

`3 consecutive odd number can never have common factor`

**`Euler’s Totient Function`**

`𝜙(N) = number of integers between 1 and N inclusive, which are coprime to N`

`![][image25]`  
`![][image26]`

`![][image27]`  
`![][image28]`  
`![][image29]`

`The number of factors of N are approx ∛N` 

**`DEPTH FIRST SEARCH`**

`vector<int> adj[N];`

`void dfs(int node, int parent)`  
`{`  
      
    `for(auto child : adj[node])`  
    `{`  
        `if(child == parent) continue;`

        `dfs(child, node);`  
    `}`  
`}`

**`BREADTH FIRST SEARCH`**

`vector<int> adj[N];`

`void bfs(int root)`  
`{`  
    `queue<int> q;`  
    `q.push(root);`

    `vector<bool> vis(N,false);`  
    `vis[root] = true;`

    `while(!q.empty())`  
    `{`  
        `int node = q.front();`  
        `q.pop();`

          
        `for(auto child : adj[node])`  
        `{`  
            `if(vis[child]) continue;`

            `vis[child] = true;`  
            `q.push(child);`  
        `}`  
    `}`  
`}`

**`FIND LEVEL OF EVERY NODE`**

`vector<int> adj[N];`  
`int level[N];`

`void dfs(int node, int parent)`  
`{`  
    `if(parent == -1)`  
        `level[node] = 0;`  
    `else`  
        `level[node] = level[parent] + 1;`

    `for(auto child : adj[node])`  
    `{`  
        `if(child == parent) continue;`

        `dfs(child, node);`  
    `}`  
`}`

**`FIND SUBTREE SIZE`** 

`vector<int> adj[N];`  
`int subtree[N];`

`void dfs(int node, int parent)`  
`{`  
    `subtree[node] = 1;`

    `for(auto child : adj[node])`  
    `{`  
        `if(child == parent) continue;`

        `dfs(child,node);`

        `subtree[node] += subtree[child];`  
    `}`  
`}`

**`FARTHEST LEAF NODE INSIDE SUBTREE`**

`vector<int> adj[N];`  
`int farthest[N];`

`void dfs(int node, int parent)`  
`{`  
    `farthest[node] = 0;`

    `for(auto child : adj[node])`  
    `{`  
        `if(child == parent) continue;`

        `dfs(child,node);`

        `farthest[node] =`  
            `max(farthest[node],`  
                `farthest[child] + 1);`  
    `}`  
`}`

**`IN-TIME OUT-TIME`**

`vector<int> adj[N];`

`int timer = 0;`  
`int inTime[N];`  
`int outTime[N];`

`void dfs(int node, int parent)`  
`{`  
    `inTime[node] = timer++;`

    `for(auto child : adj[node])`  
    `{`  
        `if(child == parent) continue;`

        `dfs(child,node);`  
    `}`

    `outTime[node] = timer++;`  
`}`

**`ANCESTOR QUERY`**

`bool isAncestor(int x,int y)`  
`{`  
    `return inTime[x] <= inTime[y] &&`  
           `outTime[y] <= outTime[x];`  
`}`

**`DIAMETER OF TREE`**

`vector<int> adj[N];`

`Int maxDist = -1;`  
`Int farthestNode = -1;`

`void dfs(int node, int parent, int dist)`  
`{`  
    `if(dist > maxDist)`  
    `{`  
        `maxDist = dist;`  
        `farthestNode = node;`  
    `}`

    `for(int child : adj[node])`  
    `{`  
        `if(child != parent)`  
            `dfs(child, node, dist + 1);`  
    `}`  
`}`

`int getDiameter()`  
`{`  
    `maxDist = -1;`  
    `dfs(0, -1, 0);`

    `int start = farthestNode;`

    `maxDist = -1;`  
    `dfs(start, -1, 0);`

    `return maxDist;`  
`}`

**`GET THE PARENT OF THE NODE`**

`vector<int> adj[N];`  
`int parentArr[N];`

`void dfs(int node, int parent)`  
`{`  
    `parentArr[node] = parent;`

    `for(auto child : adj[node])`  
    `{`  
        `if(child == parent) continue;`

        `dfs(child, node);`  
    `}`  
`}`

**`NUMBER OF CHILDREN FOR A NODE`**

`vector<int> adj[N];`  
`int children[N];`

`void dfs(int node, int parent)`  
`{`  
    `for(auto child : adj[node])`  
    `{`  
        `if(child == parent) continue;`

        `children[node]++;`

        `dfs(child, node);`  
    `}`  
`}`

[image1]: assets/permutation_combination_1.png
[image2]: assets/permutation_combination_2.png
[image3]: assets/permutation_combination_3.png
[image4]: assets/permutation_combination_4.png
[image5]: assets/permutation_combination_5.png
[image6]: assets/permutation_combination_6.png
[image7]: assets/permutation_combination_7.png
[image8]: assets/permutation_combination_8.png
[image9]: assets/arrangements_1.png
[image10]: assets/arrangements_2.png
[image11]: assets/stars_and_bars_1.png
[image12]: assets/stars_and_bars_2.png
[image13]: assets/stars_and_bars_3.png
[image14]: assets/probability_1.png
[image15]: assets/probability_2.png
[image16]: assets/expectation.png
[image17]: assets/linearity_of_expectation_1.png
[image18]: assets/linearity_of_expectation_2.png
[image19]: assets/fermat_theorem_1.png
[image20]: assets/fermat_theorem_2.png
[image21]: assets/gcd.png
[image22]: assets/encode_decode_1.png
[image23]: assets/encode_decode_2.png
[image24]: assets/mirror_symmetry.png
[image25]: assets/euler_totient_1.png
[image26]: assets/euler_totient_2.png
[image27]: assets/euler_totient_3.png
[image28]: assets/euler_totient_4.png
[image29]: assets/euler_totient_5.png

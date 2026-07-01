# STL + CP Tricks Cheat Notes

Quick reminders integrated from the CP booklet.

## Useful STL Patterns

- `sort(v.begin(), v.end())` and descending `sort(v.rbegin(), v.rend())`
- `lower_bound`, `upper_bound`, `binary_search` on sorted arrays
- `accumulate`, `count`, `partial_sum`, `unique + erase`
- `all_of`, `any_of`, `none_of` with lambdas
- `priority_queue<int, vector<int>, greater<int>>` for min-heap

## Common Conversions

- char to digit: `d = c - '0'`
- digit to char: `c = d + '0'`
- integer to string: `to_string(x)`
- string to int: `stoi(s)`, to long long: `stoll(s)`

## Frequent CP Formulas

- Number of substrings in length $n$: $n(n+1)/2$
- Smallest multiple of $i$ not less than $L$: $((L+i-1)/i)\cdot i$
- Digits in $n$: $\lfloor \log_{10}(n) \rfloor + 1$

## Pitfalls

- `unique()` removes only consecutive duplicates, call `sort()` first if needed.
- `binary_search/lower_bound/upper_bound` require sorted range.
- `__builtin_clz(0)` and `__builtin_ctz(0)` are undefined.

[Boilerplate Template](../../8_misc/1_boilerplate.cpp)

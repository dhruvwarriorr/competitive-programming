# Boilerplate & PBDS Template

Standard template containing Fast I/O, common typedefs/constants, and GNU Policy-Based Data Structures (PBDS) setup.

### Core Concept
In competitive programming, standard stream input/output operations (`cin`/`cout`) can be slow. Fast I/O configuration unties the input/output streams and disables synchronization with C standard streams, accelerating execution.
Additionally, GNU PBDS provides highly optimized data structures like `ordered_set` which supports indexing elements in logarithmic time (via `find_by_order` and `order_of_key`).

* **When to use:** In every single problem execution to avoid Time Limit Exceeded (TLE) errors. Use PBDS when you need order statistics.
* **Time Complexity:** $O(1)$ fast I/O setup, $O(\log N)$ for `ordered_set` operations.
* **Space Complexity:** $O(1)$ overhead.

### Core Logic
```cpp
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}
```

[View Full C++ Implementation](../../8_misc/1_boilerplate.cpp)

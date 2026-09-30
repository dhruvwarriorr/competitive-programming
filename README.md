<div align="center">

# 🚀 Dhruv's Competitive Programming & DSA Library

**A topic-wise C++ library of core algorithms, data structures and templates for competitive programming (Codeforces, CodeChef, AtCoder) and coding interviews. Every implementation is a standalone, runnable file with a matching theory note.**

<br>

[![CI](https://img.shields.io/github/actions/workflow/status/dhruvwarriorr/competitive-programming/ci.yml?branch=main&style=for-the-badge&logo=githubactions&logoColor=white&label=BUILD)](https://github.com/dhruvwarriorr/competitive-programming/actions)
[![C++ Version](https://img.shields.io/badge/C%2B%2B-17-00599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://en.cppreference.com/w/cpp/17)
[![Implementations](https://img.shields.io/badge/Implementations-74-brightgreen.svg?style=for-the-badge&logo=cplusplus&logoColor=white)](#-code-index)
[![Notes](https://img.shields.io/badge/Theory_Notes-88-orange.svg?style=for-the-badge&logo=readthedocs&logoColor=white)](#-theory--cheatsheets)

</div>

---

## ✨ What's Inside

- **74 runnable C++ implementations** across arrays, number theory, binary search, sorting, bit tricks, graphs, trees and range-query structures.
- **A theory note for every implementation**: when to use it, complexity, the core idea and the classic pitfalls.
- **Contest cheatsheets**: full STL reference, math formulas, modular arithmetic, combinatorics, probability, and a page of quick CP facts.
- **Generic templates** (Segment Tree, Lazy Segment Tree, Sparse Table) where you only change `Node` / `Update` per problem.
- **Verified**: CI compiles every file and checks that every link and code fence in the docs is valid.

## 🧭 Where to Start

| I want to... | Go to |
| :-- | :-- |
| Copy a starting template | [`8_misc/1_boilerplate.cpp`](8_misc/1_boilerplate.cpp) |
| Remember an STL call | [STL Cheatsheet](0_theory/8_misc/5_stl_cheatsheet.md) |
| Look up a formula or identity | [Math Formulas](0_theory/math_formulas.md) · [CP Facts](0_theory/cp_facts.md) |
| Do range queries fast | [Prefix Sum](0_theory/1_arrays/1_prefix_sum.md) → [Fenwick](0_theory/9_segment_tree/3_fenwick_tree.md) → [Segment Tree](0_theory/9_segment_tree/1_segment_tree.md) |
| Solve a shortest-path problem | [Dijkstra](0_theory/6_graphs/5_dijkstra.md) · [Bellman-Ford](0_theory/6_graphs/13_bellman_ford.md) · [Floyd-Warshall](0_theory/6_graphs/14_floyd_warshall.md) |
| Answer $\binom{n}{r} \bmod p$ | [Optimised nCr](0_theory/2_math/10_optimised_ncr.md) |

---

## 📚 Theory & Cheatsheets

All conceptual notes, proofs and formula sheets live under [`0_theory/`](0_theory). The layout mirrors the code folders, so `2_math/11_binary_exponentiation.cpp` is explained in `0_theory/2_math/11_binary_exponentiation.md`.

### 📖 Algorithm-Specific Guides

| Subject / Topic | Core Concepts Covered |
| :-- | :-- |
| [📦 Arrays & Range Queries](0_theory/1_arrays/) | Prefix sums, 2D prefix sums, suffix sums, difference arrays, subarray sum, two pointers, sliding window, Kadane |
| [🔢 Mathematics & Number Theory](0_theory/2_math/) | Sieve, smallest prime factor, factorization, divisors, factorials, nCr, Legendre's formula, binary exponentiation, Euler's totient, extended GCD |
| [🔍 Binary Search](0_theory/3_binary_search/) | Standard search, lower/upper bound, binary search on the answer (integer and decimal) |
| [🔀 Sorting Algorithms](0_theory/4_sorting/) | Merge sort (divide & conquer), quick sort (partitioning & pivot choice) |
| [⚡ Bit Manipulation](0_theory/5_bit_manipulation/) | Bit tricks, set/unset bit positions, subset enumeration, `bitset` and bitset subset-sum |
| [🕸️ Graph Algorithms](0_theory/6_graphs/) | DFS, BFS, Dijkstra, bipartite check, DSU, Kruskal, cycle detection, topological sort, SCC, Bellman-Ford, Floyd-Warshall, Tarjan bridges, DP on DAG |
| [🌲 Trees](0_theory/7_trees/) | Parent / children / subtree size, height, diameter, ancestor query, binary lifting + LCA, Euler tour flattening |
| [🧱 Segment Trees & Fenwick](0_theory/9_segment_tree/) | Generic segment tree, lazy propagation, Fenwick tree (BIT) |
| [🛠️ Miscellaneous & Templates](0_theory/8_misc/) | Fast I/O + PBDS, sort map by values, matrix rotation, sparse table, full STL cheatsheet |

### 📐 Conceptual Math & Reference Sheets

| Subject / Topic | Core Concepts Covered |
| :-- | :-- |
| [📐 Mathematics Formulas](0_theory/math_formulas.md) | Arithmetic, algebraic, geometric, volume and perimeter formulas |
| [📍 Coordinate Geometry](0_theory/coordinate_geometry.md) | Midpoints, distances, triangle area via coordinates |
| [🪵 Logarithms](0_theory/logarithms.md) | Logarithmic identities, change of base, digit-counting tricks |
| [🎲 Combinatorics](0_theory/combinatorics.md) | Permutations, combinations, circular arrangements, Stars & Bars |
| [📈 Probability](0_theory/probability.md) | Axioms, conditional probability, expected value, linearity |
| [🔢 Modular Arithmetic](0_theory/modular_arithmetic.md) | Modular add/sub/mul/div rules, modular inverse |
| [⚡ Fermat's Little Theorem](0_theory/fermat_little_theorem.md) | Statement, modular inverse via binary exponentiation, template |
| [🧮 GCD & LCM](0_theory/gcd_lcm.md) | Euclidean algorithm, LCM–GCD relation, GCD/LCM properties |
| [📏 Divisibility Rules](0_theory/divisibility_rules.md) | Quick divisibility checks for 2 through 12, 25 and 100 |
| [🧿 Euler's Totient](0_theory/euler_totient.md) | $\phi(n)$ product formula, Euler's theorem, exponent reduction, power towers |
| [🔤 ASCII Table](0_theory/ascii_table.md) | ASCII values, char arithmetic, string conversion utilities |
| [💡 CP Facts & Observations](0_theory/cp_facts.md) | Prime gaps, divisor counts, coprime facts, rounding to multiples, pigeonhole, limits table |
| [🧰 STL Cheatsheet](0_theory/8_misc/5_stl_cheatsheet.md) | Algorithms, conversions, string, vector, set, map, pair, stack, queue, deque, priority queue |

---

## 📂 Code Index

Click a filename for the implementation, or 📖 for the theory note.

<details open>
<summary><b>📦 1. Arrays & Range Queries</b> &nbsp;·&nbsp; 8 implementations</summary>
<br>

|  #  | Algorithm / Technique | Code | Notes |
| :-: | :-------------------- | :--- | :---: |
| 1 | Prefix Sum Array | [`1_prefix_sum.cpp`](1_arrays/1_prefix_sum.cpp) | [📖](0_theory/1_arrays/1_prefix_sum.md) |
| 2 | 2D Prefix Sum Matrix | [`2_2d_prefix_sum.cpp`](1_arrays/2_2d_prefix_sum.cpp) | [📖](0_theory/1_arrays/2_2d_prefix_sum.md) |
| 3 | Suffix Sum Array | [`3_suffix_sum.cpp`](1_arrays/3_suffix_sum.cpp) | [📖](0_theory/1_arrays/3_suffix_sum.md) |
| 4 | Difference Array | [`4_difference_array.cpp`](1_arrays/4_difference_array.cpp) | [📖](0_theory/1_arrays/4_difference_array.md) |
| 5 | Subarray Sum Equals K | [`5_subarray_sum.cpp`](1_arrays/5_subarray_sum.cpp) | [📖](0_theory/1_arrays/5_subarray_sum.md) |
| 6 | Two Pointers Technique | [`6_two_pointers.cpp`](1_arrays/6_two_pointers.cpp) | [📖](0_theory/1_arrays/6_two_pointers.md) |
| 7 | Sliding Window Max Sum | [`7_sliding_windows.cpp`](1_arrays/7_sliding_windows.cpp) | [📖](0_theory/1_arrays/7_sliding_windows.md) |
| 8 | Kadane's Algorithm (Max Subarray) | [`8_kadane_algorithm.cpp`](1_arrays/8_kadane_algorithm.cpp) | [📖](0_theory/1_arrays/8_kadane_algorithm.md) |

</details>

<details>
<summary><b>🔢 2. Mathematics & Number Theory</b> &nbsp;·&nbsp; 16 implementations</summary>
<br>

|  #  | Algorithm / Technique | Code | Notes |
| :-: | :-------------------- | :--- | :---: |
| 1 | Sieve of Eratosthenes | [`1_sieve_of_eratosthenes.cpp`](2_math/1_sieve_of_eratosthenes.cpp) | [📖](0_theory/2_math/1_sieve_of_eratosthenes.md) |
| 2 | Sieve — Smallest Prime Factor (SPF) | [`2_sieve_smallest_prime_factor.cpp`](2_math/2_sieve_smallest_prime_factor.cpp) | [📖](0_theory/2_math/2_sieve_smallest_prime_factor.md) |
| 3 | Distinct Prime Factorization | [`3_prime_factors.cpp`](2_math/3_prime_factors.cpp) | [📖](0_theory/2_math/3_prime_factors.md) |
| 4 | Efficient Factorization via SPF | [`4_efficient_prime_factor_using_spf.cpp`](2_math/4_efficient_prime_factor_using_spf.cpp) | [📖](0_theory/2_math/4_efficient_prime_factor_using_spf.md) |
| 5 | Smallest Prime Factor (Single) | [`5_smallest_prime_factor.cpp`](2_math/5_smallest_prime_factor.cpp) | [📖](0_theory/2_math/5_smallest_prime_factor.md) |
| 6 | Prime Check (Trial Division) | [`6_prime_check.cpp`](2_math/6_prime_check.cpp) | [📖](0_theory/2_math/6_prime_check.md) |
| 7 | Divisors / Factors of a Number | [`7_factors_of_number.cpp`](2_math/7_factors_of_number.cpp) | [📖](0_theory/2_math/7_factors_of_number.md) |
| 8 | Factorial with Modulo | [`8_factorial.cpp`](2_math/8_factorial.cpp) | [📖](0_theory/2_math/8_factorial.md) |
| 9 | Inverse Factorial (Fermat's LT) | [`9_inverse_factorial.cpp`](2_math/9_inverse_factorial.cpp) | [📖](0_theory/2_math/9_inverse_factorial.md) |
| 10 | Optimized nCr Calculations | [`10_optimised_ncr.cpp`](2_math/10_optimised_ncr.cpp) | [📖](0_theory/2_math/10_optimised_ncr.md) |
| 11 | Binary Exponentiation | [`11_binary_exponentiation.cpp`](2_math/11_binary_exponentiation.cpp) | [📖](0_theory/2_math/11_binary_exponentiation.md) |
| 12 | nCr Simple Formula | [`12_ncr.cpp`](2_math/12_ncr.cpp) | [📖](0_theory/2_math/12_ncr.md) |
| 13 | Legendre's Formula (Power of p in N!) | [`13_power_of_x_in_factorial.cpp`](2_math/13_power_of_x_in_factorial.cpp) | [📖](0_theory/2_math/13_power_of_x_in_factorial.md) |
| 14 | Power of x in N | [`14_power_of_x_in_n.cpp`](2_math/14_power_of_x_in_n.cpp) | [📖](0_theory/2_math/14_power_of_x_in_n.md) |
| 15 | Euler's Totient (Single + Sieve) | [`15_euler_totient.cpp`](2_math/15_euler_totient.cpp) | [📖](0_theory/2_math/15_euler_totient.md) |
| 16 | Extended GCD & Modular Inverse (Any Modulus) | [`16_extended_gcd.cpp`](2_math/16_extended_gcd.cpp) | [📖](0_theory/2_math/16_extended_gcd.md) |

</details>

<details>
<summary><b>🔍 3. Binary Search</b> &nbsp;·&nbsp; 5 implementations</summary>
<br>

|  #  | Algorithm / Technique | Code | Notes |
| :-: | :-------------------- | :--- | :---: |
| 1 | Standard Binary Search | [`1_binary_search.cpp`](3_binary_search/1_binary_search.cpp) | [📖](0_theory/3_binary_search/1_binary_search.md) |
| 2 | Lower Bound | [`2_lower_bound.cpp`](3_binary_search/2_lower_bound.cpp) | [📖](0_theory/3_binary_search/2_lower_bound.md) |
| 3 | Upper Bound | [`3_upper_bound.cpp`](3_binary_search/3_upper_bound.cpp) | [📖](0_theory/3_binary_search/3_upper_bound.md) |
| 4 | Binary Search on Answers (Integer) | [`4_binary_search_on_answers.cpp`](3_binary_search/4_binary_search_on_answers.cpp) | [📖](0_theory/3_binary_search/4_binary_search_on_answers.md) |
| 5 | Binary Search on Answers (Decimal) | [`5_binary_search_on_decimals.cpp`](3_binary_search/5_binary_search_on_decimals.cpp) | [📖](0_theory/3_binary_search/5_binary_search_on_decimals.md) |

</details>

<details>
<summary><b>🔀 4. Sorting Algorithms</b> &nbsp;·&nbsp; 2 implementations</summary>
<br>

|  #  | Algorithm / Technique | Code | Notes |
| :-: | :-------------------- | :--- | :---: |
| 1 | Merge Sort | [`1_merge_sort.cpp`](4_sorting/1_merge_sort.cpp) | [📖](0_theory/4_sorting/1_merge_sort.md) |
| 2 | Quick Sort | [`2_quick_sort.cpp`](4_sorting/2_quick_sort.cpp) | [📖](0_theory/4_sorting/2_quick_sort.md) |

</details>

<details>
<summary><b>⚡ 5. Bit Manipulation</b> &nbsp;·&nbsp; 8 implementations</summary>
<br>

|  #  | Algorithm / Technique | Code | Notes |
| :-: | :-------------------- | :--- | :---: |
| 1 | Count Set Bits (Kernighan's Algorithm) | [`1_count_the_set_bits.cpp`](5_bit_manipulation/1_count_the_set_bits.cpp) | [📖](0_theory/5_bit_manipulation/1_count_the_set_bits.md) |
| 2 | Lowest Set Bit Position | [`2_lowest_set_bit_position.cpp`](5_bit_manipulation/2_lowest_set_bit_position.cpp) | [📖](0_theory/5_bit_manipulation/2_lowest_set_bit_position.md) |
| 3 | Highest Set Bit Position | [`3_highest_set_bit_position.cpp`](5_bit_manipulation/3_highest_set_bit_position.cpp) | [📖](0_theory/5_bit_manipulation/3_highest_set_bit_position.md) |
| 4 | Lowest Unset Bit Position | [`4_lowest_unset_bit_position.cpp`](5_bit_manipulation/4_lowest_unset_bit_position.cpp) | [📖](0_theory/5_bit_manipulation/4_lowest_unset_bit_position.md) |
| 5 | Highest Unset Bit Position | [`5_highest_unset_bit_position.cpp`](5_bit_manipulation/5_highest_unset_bit_position.cpp) | [📖](0_theory/5_bit_manipulation/5_highest_unset_bit_position.md) |
| 6 | Highest Unset Bit (Significant Bits) | [`6_highest_unset_bit_among_significant_bits.cpp`](5_bit_manipulation/6_highest_unset_bit_among_significant_bits.cpp) | [📖](0_theory/5_bit_manipulation/6_highest_unset_bit_among_significant_bits.md) |
| 7 | Generate All Subsets via Bitmasking | [`7_generate_all_subset_using_bitmasking.cpp`](5_bit_manipulation/7_generate_all_subset_using_bitmasking.cpp) | [📖](0_theory/5_bit_manipulation/7_generate_all_subset_using_bitmasking.md) |
| 8 | Bitset Subset Sum | [`8_bitset_subset_sum.cpp`](5_bit_manipulation/8_bitset_subset_sum.cpp) | [📖](0_theory/5_bit_manipulation/8_bitset_subset_sum.md) |

</details>

<details>
<summary><b>🕸️ 6. Graph Algorithms</b> &nbsp;·&nbsp; 16 implementations</summary>
<br>

|  #  | Algorithm / Technique | Code | Notes |
| :-: | :-------------------- | :--- | :---: |
| 1 | Depth First Search (DFS) | [`1_depth_first_search.cpp`](6_graphs/1_depth_first_search.cpp) | [📖](0_theory/6_graphs/1_depth_first_search.md) |
| 2 | Breadth First Search (BFS) | [`2_breadth_first_search.cpp`](6_graphs/2_breadth_first_search.cpp) | [📖](0_theory/6_graphs/2_breadth_first_search.md) |
| 3 | Find Level of Every Node | [`3_find_level_of_every_node.cpp`](6_graphs/3_find_level_of_every_node.cpp) | [📖](0_theory/6_graphs/3_find_level_of_every_node.md) |
| 4 | DFS Entry / Exit Timers (Euler Tour) | [`4_in_time_out_time.cpp`](6_graphs/4_in_time_out_time.cpp) | [📖](0_theory/6_graphs/4_in_time_out_time.md) |
| 5 | Dijkstra (SSSP, Non-Negative Weights) | [`5_dijkstra.cpp`](6_graphs/5_dijkstra.cpp) | [📖](0_theory/6_graphs/5_dijkstra.md) |
| 6 | Bipartite Check | [`6_bipartite_check.cpp`](6_graphs/6_bipartite_check.cpp) | [📖](0_theory/6_graphs/6_bipartite_check.md) |
| 7 | Disjoint Set Union (DSU) | [`7_disjoint_set_union.cpp`](6_graphs/7_disjoint_set_union.cpp) | [📖](0_theory/6_graphs/7_disjoint_set_union.md) |
| 8 | Kruskal Minimum Spanning Tree | [`8_kruskal_mst.cpp`](6_graphs/8_kruskal_mst.cpp) | [📖](0_theory/6_graphs/8_kruskal_mst.md) |
| 9 | Directed Cycle Detection | [`9_directed_cycle_detection.cpp`](6_graphs/9_directed_cycle_detection.cpp) | [📖](0_theory/6_graphs/9_directed_cycle_detection.md) |
| 10 | Topological Sort (Kahn) | [`10_topological_sort_kahn.cpp`](6_graphs/10_topological_sort_kahn.cpp) | [📖](0_theory/6_graphs/10_topological_sort_kahn.md) |
| 11 | Topological Sort (DFS) | [`11_topological_sort_dfs.cpp`](6_graphs/11_topological_sort_dfs.cpp) | [📖](0_theory/6_graphs/11_topological_sort_dfs.md) |
| 12 | Kosaraju SCC | [`12_kosaraju_scc.cpp`](6_graphs/12_kosaraju_scc.cpp) | [📖](0_theory/6_graphs/12_kosaraju_scc.md) |
| 13 | Bellman-Ford | [`13_bellman_ford.cpp`](6_graphs/13_bellman_ford.cpp) | [📖](0_theory/6_graphs/13_bellman_ford.md) |
| 14 | Floyd-Warshall | [`14_floyd_warshall.cpp`](6_graphs/14_floyd_warshall.cpp) | [📖](0_theory/6_graphs/14_floyd_warshall.md) |
| 15 | Tarjan's Bridges | [`15_tarjan_bridges.cpp`](6_graphs/15_tarjan_bridges.cpp) | [📖](0_theory/6_graphs/15_tarjan_bridges.md) |
| 16 | DP on a DAG (Longest Path) | [`16_dp_on_dag.cpp`](6_graphs/16_dp_on_dag.cpp) | [📖](0_theory/6_graphs/16_dp_on_dag.md) |

</details>

<details>
<summary><b>🌲 7. Trees</b> &nbsp;·&nbsp; 12 implementations</summary>
<br>

|  #  | Algorithm / Technique | Code | Notes |
| :-: | :-------------------- | :--- | :---: |
| 1 | Precompute Parent of Every Node | [`1_get_the_parent_of_the_node.cpp`](7_trees/1_get_the_parent_of_the_node.cpp) | [📖](0_theory/7_trees/1_get_the_parent_of_the_node.md) |
| 2 | Count Children for Every Node | [`2_number_of_children_for_a_node.cpp`](7_trees/2_number_of_children_for_a_node.cpp) | [📖](0_theory/7_trees/2_number_of_children_for_a_node.md) |
| 3 | Find Subtree Size | [`3_find_subtree_size.cpp`](7_trees/3_find_subtree_size.cpp) | [📖](0_theory/7_trees/3_find_subtree_size.md) |
| 4 | Farthest Leaf Node (Node Height) | [`4_farthest_leaf_node_inside_subtree.cpp`](7_trees/4_farthest_leaf_node_inside_subtree.cpp) | [📖](0_theory/7_trees/4_farthest_leaf_node_inside_subtree.md) |
| 5 | Diameter of a Tree | [`5_diameter_of_tree.cpp`](7_trees/5_diameter_of_tree.cpp) | [📖](0_theory/7_trees/5_diameter_of_tree.md) |
| 6 | Ancestor Query in O(1) | [`6_ancestor_query.cpp`](7_trees/6_ancestor_query.cpp) | [📖](0_theory/7_trees/6_ancestor_query.md) |
| 7 | Depth First Search (DFS) | [`7_depth_first_search.cpp`](7_trees/7_depth_first_search.cpp) | [📖](0_theory/7_trees/7_depth_first_search.md) |
| 8 | Breadth First Search (BFS) | [`8_breadth_first_search.cpp`](7_trees/8_breadth_first_search.cpp) | [📖](0_theory/7_trees/8_breadth_first_search.md) |
| 9 | Find Level of Every Node | [`9_find_level_of_every_node.cpp`](7_trees/9_find_level_of_every_node.cpp) | [📖](0_theory/7_trees/9_find_level_of_every_node.md) |
| 10 | DFS Entry / Exit Timers (Euler Tour) | [`10_in_time_out_time.cpp`](7_trees/10_in_time_out_time.cpp) | [📖](0_theory/7_trees/10_in_time_out_time.md) |
| 11 | Binary Lifting + LCA | [`11_binary_lifting_lca.cpp`](7_trees/11_binary_lifting_lca.cpp) | [📖](0_theory/7_trees/11_binary_lifting_lca.md) |
| 12 | Euler Tour Flattening (Subtree to Range) | [`12_euler_tour_flattening.cpp`](7_trees/12_euler_tour_flattening.cpp) | [📖](0_theory/7_trees/12_euler_tour_flattening.md) |

</details>

<details>
<summary><b>🛠️ 8. Miscellaneous & Boilerplate</b> &nbsp;·&nbsp; 4 implementations</summary>
<br>

|  #  | Algorithm / Technique | Code | Notes |
| :-: | :-------------------- | :--- | :---: |
| 1 | Competitive Programming Boilerplate (Fast I/O + PBDS) | [`1_boilerplate.cpp`](8_misc/1_boilerplate.cpp) | [📖](0_theory/8_misc/1_boilerplate.md) |
| 2 | Sort `std::map` by Values | [`2_sort_map_by_values.cpp`](8_misc/2_sort_map_by_values.cpp) | [📖](0_theory/8_misc/2_sort_map_by_values.md) |
| 3 | Matrix Rotation & Mirroring | [`3_matrix_rotation.cpp`](8_misc/3_matrix_rotation.cpp) | [📖](0_theory/8_misc/3_matrix_rotation.md) |
| 4 | Sparse Table (Generic, O(1) Idempotent Queries) | [`4_sparse_table.cpp`](8_misc/4_sparse_table.cpp) | [📖](0_theory/8_misc/4_sparse_table.md) |

</details>

<details>
<summary><b>🧱 9. Segment Trees & Fenwick</b> &nbsp;·&nbsp; 3 implementations</summary>
<br>

|  #  | Algorithm / Technique | Code | Notes |
| :-: | :-------------------- | :--- | :---: |
| 1 | Segment Tree (Generic, Point Update + Range Query) | [`1_segment_tree.cpp`](9_segment_tree/1_segment_tree.cpp) | [📖](0_theory/9_segment_tree/1_segment_tree.md) |
| 2 | Lazy Segment Tree (Generic, Range Update + Range Query) | [`2_lazy_segment_tree.cpp`](9_segment_tree/2_lazy_segment_tree.cpp) | [📖](0_theory/9_segment_tree/2_lazy_segment_tree.md) |
| 3 | Fenwick Tree (BIT) | [`3_fenwick_tree.cpp`](9_segment_tree/3_fenwick_tree.cpp) | [📖](0_theory/9_segment_tree/3_fenwick_tree.md) |

</details>

---

## 🗂️ Repository Layout

```text
.
├── 0_theory/               # notes: mirrors the code folders + reference sheets
│   ├── 1_arrays/ … 9_segment_tree/
│   └── *.md                # math_formulas, combinatorics, cp_facts, ...
├── 1_arrays/               # prefix sums, two pointers, Kadane, ...
├── 2_math/                 # sieve, factorization, nCr, totient, extgcd, ...
├── 3_binary_search/
├── 4_sorting/
├── 5_bit_manipulation/
├── 6_graphs/               # traversals, shortest paths, DSU, SCC, bridges, ...
├── 7_trees/                # LCA, diameter, Euler tour, ...
├── 8_misc/                 # boilerplate, sparse table, matrix rotation, ...
├── 9_segment_tree/         # segment tree, lazy segment tree, Fenwick
├── scripts/                # check.sh (compile all) + lint_docs.py (validate docs)
└── .github/workflows/      # CI
```
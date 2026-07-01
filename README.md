<div align="center">

# 🚀 Dhruv's Competitive Programming & DSA Library

**A curated, production-grade, and highly-optimized C++ library containing core algorithms, data structures, and standard boilerplate templates designed for Competitive Programming, online judges (Codeforces, Codechef, AtCoder), and coding interviews.**

<br>

[![C++ Version](https://img.shields.io/badge/C%2B%2B-17-00599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://en.cppreference.com/w/cpp/17)
[![Performance](https://img.shields.io/badge/Performance-Optimized-brightgreen.svg?style=for-the-badge&logo=speedtest&logoColor=white)](https://github.com/dhruvwarriorr/competitive-programming)
[![Structure](https://img.shields.io/badge/Structure-Topic--Wise-orange.svg?style=for-the-badge&logo=sitemap&logoColor=white)](#-repository-layout)
[![Visitors](https://komarev.com/ghpvc/?username=dhruvwarriorr&repo=competitive-programming&color=blueviolet&style=for-the-badge&label=PROFILE+VIEWS)](https://github.com/dhruvwarriorr/competitive-programming)

</div>

## 📚 Theory, Formulas & Cheatsheets

All conceptual notes, proofs, and formula sheets are organized under [`0_theory/`](0_theory). Each topic below links directly to its notes or subfolder.

### 📖 Algorithm-Specific Theory Guides

| Subject / Topic                                     | Core Concepts Covered                                                                                                                                                       |
| :-------------------------------------------------- | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [📦 Arrays & Range Queries](0_theory/1_arrays/)     | Prefix sums, 2D prefix sums, suffix sums, difference arrays, subarray sum, two pointers, sliding window, Kadane's algorithm                                                 |
| [🔢 Mathematics & Number Theory](0_theory/2_math/)  | Sieve of Eratosthenes, smallest prime factor (SPF), prime factorization, divisors, factorials, modular inverse, binary exponentiation                                       |
| [🔍 Binary Search](0_theory/3_binary_search/)       | Standard binary search, lower/upper bound, binary search on integer answer space, binary search on decimals                                                                 |
| [🔀 Sorting Algorithms](0_theory/4_sorting/)        | Merge sort (divide & conquer), quick sort (partition strategy & pivot selection)                                                                                            |
| [⚡ Bit Manipulation](0_theory/5_bit_manipulation/) | Count set bits (Kernighan's), lowest/highest set & unset bit positions, subset enumeration via bitmasking                                                                   |
| [🕸️ Graph Algorithms](0_theory/6_graphs/)           | DFS, BFS, node levels, in/out timing, Dijkstra, bipartite check, DSU, Kruskal MST, directed cycle detection, topological sort, SCC (Kosaraju), Bellman-Ford, Floyd-Warshall |
| [🌲 Trees](0_theory/7_trees/)                       | Parent precomputation, subtree sizes, node height, tree diameter, ancestor queries, Binary Lifting + LCA, Euler tour flattening                                             |
| [🧱 Segment Trees](0_theory/9_segment_tree/)        | Segment tree (point update + range query), lazy propagation segment tree (range update + range query)                                                                       |
| [🛠️ Miscellaneous & Templates](0_theory/8_misc/)    | Fast I/O setup, GNU PBDS `ordered_set`, sort map by values, sparse table, STL CP tricks                                                                                     |

### 📐 Conceptual Math & Reference Sheets

| Subject / Topic                                                 | Core Concepts Covered                                                        |
| :-------------------------------------------------------------- | :--------------------------------------------------------------------------- |
| [📐 Mathematics Formulas](0_theory/math_formulas.md)            | Arithmetic, algebraic, geometric, volume, and perimeter formulas             |
| [📍 Coordinate Geometry](0_theory/coordinate_geometry.md)       | Midpoints, distances, triangle area via coordinates                          |
| [🪵 Logarithms](0_theory/logarithms.md)                         | Logarithmic identities, change of base, digit counting tricks                |
| [🎲 Combinatorics](0_theory/combinatorics.md)                   | Permutations, combinations, circular arrangements, Stars & Bars              |
| [📈 Probability](0_theory/probability.md)                       | Probability axioms, conditional probability, expected value, linearity       |
| [🔢 Modular Arithmetic](0_theory/modular_arithmetic.md)         | Modular add/sub/mul/div rules, modular inverse, Fermat's Little Theorem      |
| [⚡ Fermat's Little Theorem](0_theory/fermat_little_theorem.md) | Theorem statement, modular inverse via binary exponentiation, C++ template   |
| [🧮 GCD & LCM](0_theory/gcd_lcm.md)                             | Euclidean algorithm, LCM–GCD relation, extended GCD properties               |
| [📏 Divisibility Rules](0_theory/divisibility_rules.md)         | Quick primality checks via divisibility rules for primes                     |
| [🧿 Euler's Totient](0_theory/euler_totient.md)                 | $\phi(n)$ product formula, Euler's Theorem, exponent reduction, power towers |
| [🔤 ASCII Table](0_theory/ascii_table.md)                       | ASCII decimal mappings, char arithmetic, string conversion utilities         |

---

## 📂 Code Index

Click any filename to view the standalone, production-ready C++ implementation.

<details open>
<summary><b>📦 1. Arrays & Range Queries</b></summary>
<br>

|  #  | Algorithm / Technique             | File                                                               |
| :-: | :-------------------------------- | :----------------------------------------------------------------- |
|  1  | Prefix Sum Array                  | [1_arrays/1_prefix_sum.cpp](1_arrays/1_prefix_sum.cpp)             |
|  2  | 2D Prefix Sum Matrix              | [1_arrays/2_2d_prefix_sum.cpp](1_arrays/2_2d_prefix_sum.cpp)       |
|  3  | Suffix Sum Array                  | [1_arrays/3_suffix_sum.cpp](1_arrays/3_suffix_sum.cpp)             |
|  4  | Difference Array                  | [1_arrays/4_difference_array.cpp](1_arrays/4_difference_array.cpp) |
|  5  | Subarray Sum Equals K             | [1_arrays/5_subarray_sum.cpp](1_arrays/5_subarray_sum.cpp)         |
|  6  | Two Pointers Technique            | [1_arrays/6_two_pointers.cpp](1_arrays/6_two_pointers.cpp)         |
|  7  | Sliding Window Max Sum            | [1_arrays/7_sliding_windows.cpp](1_arrays/7_sliding_windows.cpp)   |
|  8  | Kadane's Algorithm (Max Subarray) | [1_arrays/8_kadane_algorithm.cpp](1_arrays/8_kadane_algorithm.cpp) |

</details>

<details>
<summary><b>🔢 2. Mathematics & Number Theory</b></summary>
<br>

|  #  | Algorithm / Technique                 | File                                                                                           |
| :-: | :------------------------------------ | :--------------------------------------------------------------------------------------------- |
|  1  | Sieve of Eratosthenes                 | [2_math/1_sieve_of_eratosthenes.cpp](2_math/1_sieve_of_eratosthenes.cpp)                       |
|  2  | Sieve — Smallest Prime Factor (SPF)   | [2_math/2_sieve_smallest_prime_factor.cpp](2_math/2_sieve_smallest_prime_factor.cpp)           |
|  3  | Distinct Prime Factorization          | [2_math/3_prime_factors.cpp](2_math/3_prime_factors.cpp)                                       |
|  4  | Efficient Factorization via SPF       | [2_math/4_efficient_prime_factor_using_spf.cpp](2_math/4_efficient_prime_factor_using_spf.cpp) |
|  5  | Smallest Prime Factor (Single)        | [2_math/5_smallest_prime_factor.cpp](2_math/5_smallest_prime_factor.cpp)                       |
|  6  | Prime Check (Trial Division)          | [2_math/6_prime_check.cpp](2_math/6_prime_check.cpp)                                           |
|  7  | Divisors / Factors of a Number        | [2_math/7_factors_of_number.cpp](2_math/7_factors_of_number.cpp)                               |
|  8  | Factorial with Modulo                 | [2_math/8_factorial.cpp](2_math/8_factorial.cpp)                                               |
|  9  | Inverse Factorial (Fermat's LT)       | [2_math/9_inverse_factorial.cpp](2_math/9_inverse_factorial.cpp)                               |
| 10  | Optimized nCr Calculations            | [2_math/10_optimised_ncr.cpp](2_math/10_optimised_ncr.cpp)                                     |
| 11  | Binary Exponentiation                 | [2_math/11_binary_exponentiation.cpp](2_math/11_binary_exponentiation.cpp)                     |
| 12  | nCr Simple Formula                    | [2_math/12_ncr.cpp](2_math/12_ncr.cpp)                                                         |
| 13  | Legendre's Formula (Power of p in N!) | [2_math/13_power_of_x_in_factorial.cpp](2_math/13_power_of_x_in_factorial.cpp)                 |
| 14  | Power of x in N                       | [2_math/14_power_of_x_in_n.cpp](2_math/14_power_of_x_in_n.cpp)                                 |

</details>

<details>
<summary><b>🔍 3. Binary Search</b></summary>
<br>

|  #  | Algorithm / Technique              | File                                                                                               |
| :-: | :--------------------------------- | :------------------------------------------------------------------------------------------------- |
|  1  | Standard Binary Search             | [3_binary_search/1_binary_search.cpp](3_binary_search/1_binary_search.cpp)                         |
|  2  | Lower Bound                        | [3_binary_search/2_lower_bound.cpp](3_binary_search/2_lower_bound.cpp)                             |
|  3  | Upper Bound                        | [3_binary_search/3_upper_bound.cpp](3_binary_search/3_upper_bound.cpp)                             |
|  4  | Binary Search on Answers (Integer) | [3_binary_search/4_binary_search_on_answers.cpp](3_binary_search/4_binary_search_on_answers.cpp)   |
|  5  | Binary Search on Answers (Decimal) | [3_binary_search/5_binary_search_on_decimals.cpp](3_binary_search/5_binary_search_on_decimals.cpp) |

</details>

<details>
<summary><b>🔀 4. Sorting Algorithms</b></summary>
<br>

|  #  | Algorithm / Technique | File                                                     |
| :-: | :-------------------- | :------------------------------------------------------- |
|  1  | Merge Sort            | [4_sorting/1_merge_sort.cpp](4_sorting/1_merge_sort.cpp) |
|  2  | Quick Sort            | [4_sorting/2_quick_sort.cpp](4_sorting/2_quick_sort.cpp) |

</details>

<details>
<summary><b>⚡ 5. Bit Manipulation</b></summary>
<br>

|  #  | Algorithm / Technique                  | File                                                                                                                                   |
| :-: | :------------------------------------- | :------------------------------------------------------------------------------------------------------------------------------------- |
|  1  | Count Set Bits (Kernighan's Algorithm) | [5_bit_manipulation/1_count_the_set_bits.cpp](5_bit_manipulation/1_count_the_set_bits.cpp)                                             |
|  2  | Lowest Set Bit Position                | [5_bit_manipulation/2_lowest_set_bit_position.cpp](5_bit_manipulation/2_lowest_set_bit_position.cpp)                                   |
|  3  | Highest Set Bit Position               | [5_bit_manipulation/3_highest_set_bit_position.cpp](5_bit_manipulation/3_highest_set_bit_position.cpp)                                 |
|  4  | Lowest Unset Bit Position              | [5_bit_manipulation/4_lowest_unset_bit_position.cpp](5_bit_manipulation/4_lowest_unset_bit_position.cpp)                               |
|  5  | Highest Unset Bit Position             | [5_bit_manipulation/5_highest_unset_bit_position.cpp](5_bit_manipulation/5_highest_unset_bit_position.cpp)                             |
|  6  | Highest Unset Bit (Significant Bits)   | [5_bit_manipulation/6_highest_unset_bit_among_significant_bits.cpp](5_bit_manipulation/6_highest_unset_bit_among_significant_bits.cpp) |
|  7  | Generate All Subsets via Bitmasking    | [5_bit_manipulation/7_generate_all_subset_using_bitmasking.cpp](5_bit_manipulation/7_generate_all_subset_using_bitmasking.cpp)         |

</details>

<details>
<summary><b>🕸️ 6. Graph Algorithms</b></summary>
<br>

|  #  | Algorithm / Technique                 | File                                                                               |
| :-: | :------------------------------------ | :--------------------------------------------------------------------------------- |
|  1  | Depth First Search (DFS)              | [6_graphs/1_depth_first_search.cpp](6_graphs/1_depth_first_search.cpp)             |
|  2  | Breadth First Search (BFS)            | [6_graphs/2_breadth_first_search.cpp](6_graphs/2_breadth_first_search.cpp)         |
|  3  | Find Level of Every Node              | [6_graphs/3_find_level_of_every_node.cpp](6_graphs/3_find_level_of_every_node.cpp) |
|  4  | DFS Entry / Exit Timers (Euler Tour)  | [6_graphs/4_in_time_out_time.cpp](6_graphs/4_in_time_out_time.cpp)                 |
|  5  | Dijkstra (SSSP, Non-Negative Weights) | [6_graphs/5_dijkstra.cpp](6_graphs/5_dijkstra.cpp)                                 |
|  6  | Bipartite Check                       | [6_graphs/6_bipartite_check.cpp](6_graphs/6_bipartite_check.cpp)                   |
|  7  | Disjoint Set Union (DSU)              | [6_graphs/7_disjoint_set_union.cpp](6_graphs/7_disjoint_set_union.cpp)             |
|  8  | Kruskal Minimum Spanning Tree         | [6_graphs/8_kruskal_mst.cpp](6_graphs/8_kruskal_mst.cpp)                           |
|  9  | Directed Cycle Detection              | [6_graphs/9_directed_cycle_detection.cpp](6_graphs/9_directed_cycle_detection.cpp) |
| 10  | Topological Sort (Kahn)               | [6_graphs/10_topological_sort_kahn.cpp](6_graphs/10_topological_sort_kahn.cpp)     |
| 11  | Topological Sort (DFS)                | [6_graphs/11_topological_sort_dfs.cpp](6_graphs/11_topological_sort_dfs.cpp)       |
| 12  | Kosaraju SCC                          | [6_graphs/12_kosaraju_scc.cpp](6_graphs/12_kosaraju_scc.cpp)                       |
| 13  | Bellman-Ford                          | [6_graphs/13_bellman_ford.cpp](6_graphs/13_bellman_ford.cpp)                       |
| 14  | Floyd-Warshall                        | [6_graphs/14_floyd_warshall.cpp](6_graphs/14_floyd_warshall.cpp)                   |

</details>

<details>
<summary><b>🌲 7. Trees</b></summary>
<br>

|  #  | Algorithm / Technique                 | File                                                                                               |
| :-: | :------------------------------------ | :------------------------------------------------------------------------------------------------- |
|  1  | Precompute Parent of Every Node       | [7_trees/1_get_the_parent_of_the_node.cpp](7_trees/1_get_the_parent_of_the_node.cpp)               |
|  2  | Count Children for Every Node         | [7_trees/2_number_of_children_for_a_node.cpp](7_trees/2_number_of_children_for_a_node.cpp)         |
|  3  | Find Subtree Size                     | [7_trees/3_find_subtree_size.cpp](7_trees/3_find_subtree_size.cpp)                                 |
|  4  | Farthest Leaf Node (Node Height)      | [7_trees/4_farthest_leaf_node_inside_subtree.cpp](7_trees/4_farthest_leaf_node_inside_subtree.cpp) |
|  5  | Diameter of a Tree                    | [7_trees/5_diameter_of_tree.cpp](7_trees/5_diameter_of_tree.cpp)                                   |
|  6  | Ancestor Query in O(1)                | [7_trees/6_ancestor_query.cpp](7_trees/6_ancestor_query.cpp)                                       |
|  7  | Depth First Search (DFS)              | [7_trees/7_depth_first_search.cpp](7_trees/7_depth_first_search.cpp)                               |
|  8  | Breadth First Search (BFS)            | [7_trees/8_breadth_first_search.cpp](7_trees/8_breadth_first_search.cpp)                           |
|  9  | Find Level of Every Node              | [7_trees/9_find_level_of_every_node.cpp](7_trees/9_find_level_of_every_node.cpp)                   |
| 10  | DFS Entry / Exit Timers (Euler Tour)  | [7_trees/10_in_time_out_time.cpp](7_trees/10_in_time_out_time.cpp)                                 |
| 11  | Binary Lifting + LCA                  | [7_trees/11_binary_lifting_lca.cpp](7_trees/11_binary_lifting_lca.cpp)                             |
| 12  | Euler Tour Flattening (Subtree Range) | [7_trees/12_euler_tour_flattening.cpp](7_trees/12_euler_tour_flattening.cpp)                       |

</details>

<details>
<summary><b>🛠️ 8. Miscellaneous & Boilerplate</b></summary>
<br>

|  #  | Algorithm / Technique                                 | File                                                               |
| :-: | :---------------------------------------------------- | :----------------------------------------------------------------- |
|  1  | Competitive Programming Boilerplate (Fast I/O + PBDS) | [8_misc/1_boilerplate.cpp](8_misc/1_boilerplate.cpp)               |
|  2  | Sort `std::map` by Values                             | [8_misc/2_sort_map_by_values.cpp](8_misc/2_sort_map_by_values.cpp) |
|  3  | Sparse Table (Range Minimum Query)                    | [8_misc/5_sparse_table.cpp](8_misc/5_sparse_table.cpp)             |

</details>

<details>
<summary><b>🧱 9. Segment Trees</b></summary>
<br>

|  #  | Algorithm / Technique                     | File                                                                             |
| :-: | :---------------------------------------- | :------------------------------------------------------------------------------- |
|  1  | Segment Tree (Point Update + Range Sum)   | [9_segment_tree/1_segment_tree.cpp](9_segment_tree/1_segment_tree.cpp)           |
|  2  | Lazy Segment Tree (Range Add + Range Sum) | [9_segment_tree/2_lazy_segment_tree.cpp](9_segment_tree/2_lazy_segment_tree.cpp) |

</details>

---

## 💻 Quick Start

> [!NOTE]
> Ensure your compiler supports **C++17 or above**.

### Compile

```bash
g++ -std=c++17 -O2 1_arrays/1_prefix_sum.cpp -o solution
```

### Run

```bash
./solution < input.txt > output.txt
```

### Compile & Run (one-liner)

```bash
g++ -std=c++17 -O2 2_math/11_binary_exponentiation.cpp -o sol && ./sol
```

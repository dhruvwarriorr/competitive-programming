<div align="center">

# 🚀 Dhruv's Competitive Programming & DSA Library

A curated, production-grade, and highly-optimized C++ library containing core algorithms, data structures, and standard boilerplate templates designed for Competitive Programming, online judges (Codeforces, Codechef, AtCoder), and coding interviews.

[![C++ Version](https://img.shields.io/badge/C%2B%2B-17-blue.svg?style=for-the-badge&logo=c%2B%2B)](https://en.cppreference.com/w/cpp/17)
[![Optimized](https://img.shields.io/badge/Performance-Optimized-success.svg?style=for-the-badge)](https://github.com/dhruvwarriorr/competitive-programming)
[![Code Structure](https://img.shields.io/badge/Structure-Topic--Wise-orange.svg?style=for-the-badge)](#-repository-layout)

</div>

---

## 📚 Theory, Formulas & Cheatsheets

All mathematical notes, divisibility properties, and concept-specific cheatsheets have been organized into distinct Markdown documents under [0_theory/](0_theory):

### 📖 Topic-Specific Theory Guides
* [📚 Arrays Theory](0_theory/1_arrays/) — Prefix sums, suffix sums, difference arrays, sliding windows, and Kadane's algorithm.
* [📚 Mathematics Theory](0_theory/2_math/) — Primes, sieves (SPF), divisors, factorials, modular inverse, and binary exponentiation.
* [📚 Binary Search Theory](0_theory/3_binary_search/) — Bounds, searching index, and binary search on integer/decimal answer spaces.
* [📚 Sorting Theory](0_theory/4_sorting/) — Merge sort and quick sort partition properties.
* [📚 Bit Manipulation Theory](0_theory/5_bit_manipulation/) — Bitwise operator tables, common tricks, std::bitset cheatsheets, and encoding.
* [📚 Graph Theory](0_theory/7_trees/) — BFS, DFS, node level queries, and traversal entry/exit timers.
* [📚 Tree Theory](0_theory/7_trees/) — Tree diameter, subtree sizing, parent precomputation, ancestor queries, and node height calculators.
* [📚 Miscellaneous Theory](0_theory/8_misc/) — C++ template headers, Fast I/O, and utilities (e.g., sorting map by value).

### 📐 Conceptual Math & Reference Sheets
* [📐 Mathematics Formulas](0_theory/math_formulas.md) — Arithmetic, algebraic, volume, and perimeter formulas.
* [📍 Coordinate Geometry](0_theory/coordinate_geometry.md) — Midpoints, distances, and triangle area coordinates.
* [🪵 Logarithms](0_theory/logarithms.md) — Logarithmic properties and digit calculations.
* [🎲 Combinatorics](0_theory/combinatorics.md) — Permutations, combinations, arrangements, and Stars & Bars theorem.
* [📈 Probability](0_theory/probability.md) — Probability properties, conditional rules, and expected values.
* [🔢 Modular Arithmetic](0_theory/modular_arithmetic.md) — Modular operations, properties, and Fermat's Little Theorem.
* [⚡ Fermat's Little Theorem](0_theory/fermat_little_theorem.md) — Fermat's theorem statement, modular multiplicative inverse calculation, and C++ template.
* [🧮 GCD & LCM](0_theory/gcd_lcm.md) — GCD and LCM equations and properties.
* [📏 Divisibility Rules](0_theory/divisibility_rules.md) — Prime divisibility checks.
* [🧿 Euler's Totient](0_theory/euler_totient.md) — Euler's totient product formula and divisors properties.
* [🔤 ASCII Table & Conversions](0_theory/ascii_table.md) — ASCII decimal mappings, character conversions, and standard utilities.

---

## 📂 Repository Layout

The source files and math notes are organized into topic-specific modules. Click on any topic name to navigate directly to its directory:

| Module | Key Concepts & Contents |
| :--- | :--- |
| [**📂 Arrays & Range Queries**](1_arrays) | Prefix/suffix calculations, difference arrays, two-pointers, sliding windows, and Kadane's algorithm. |
| [**📂 Mathematics & Number Theory**](2_math) | Prime sieves (SPF), factorization, combinatorics (nCr), binary exponentiation, and modular arithmetic. |
| [**📂 Binary Search**](3_binary_search) | Binary search variations, lower/upper bounds, and binary search on answer spaces (integers & decimals). |
| [**📂 Sorting Algorithms**](4_sorting) | Divide-and-conquer implementations, including Merge Sort and Quick Sort. |
| [**📂 Bit Manipulation**](5_bit_manipulation) | Subset generation, counting set bits, finding bit positions, and bitwise tricks. |
| [**📂 Graph Algorithms**](6_graphs) | Breadth-First Search (BFS), Depth-First Search (DFS), node level queries, and entry/exit traversal timers. |
| [**📂 Tree Algorithms**](7_trees) | Tree diameter, subtree sizing, parent precomputation, ancestor queries, and node height calculators. |
| [**📂 Miscellaneous & Boilerplate**](8_misc) | High-performance template headers, fast input/output macros, and utilities (e.g., sorting map by value). |
| [**📂 Theory, Formulas & Cheatsheets**](0_theory) | Hand-crafted notes, theorems, and formula sheets for fast reference. |

---

## 📂 Categorized Code Table of Contents

Click on any file name to view its production-ready standalone C++ implementation.

<details open>
<summary><b>📂 1. Arrays & Range Queries</b></summary>
<br>

| Algorithm / Technique | Source Code File |
| :--- | :--- |
| **1. Prefix Sum Array** | [1_arrays/1_prefix_sum.cpp](1_arrays/1_prefix_sum.cpp) |
| **2. 2D Prefix Sum Matrix** | [1_arrays/2_2d_prefix_sum.cpp](1_arrays/2_2d_prefix_sum.cpp) |
| **3. Suffix Sum Array** | [1_arrays/3_suffix_sum.cpp](1_arrays/3_suffix_sum.cpp) |
| **4. Difference Array** | [1_arrays/4_difference_array.cpp](1_arrays/4_difference_array.cpp) |
| **5. Subarray Sum Equals K** | [1_arrays/5_subarray_sum.cpp](1_arrays/5_subarray_sum.cpp) |
| **6. Two Pointers Technique** | [1_arrays/6_two_pointers.cpp](1_arrays/6_two_pointers.cpp) |
| **7. Sliding Window Max Sum** | [1_arrays/7_sliding_windows.cpp](1_arrays/7_sliding_windows.cpp) |
| **8. Kadane's Algorithm** | [1_arrays/8_kadane_algorithm.cpp](1_arrays/8_kadane_algorithm.cpp) |

</details>

<details>
<summary><b>📂 2. Math & Number Theory</b></summary>
<br>

| Algorithm / Technique | Source Code File |
| :--- | :--- |
| **1. Sieve of Eratosthenes** | [2_math/1_sieve_of_eratosthenes.cpp](2_math/1_sieve_of_eratosthenes.cpp) |
| **2. Sieve SPF (Smallest Prime Factor)** | [2_math/2_sieve_smallest_prime_factor.cpp](2_math/2_sieve_smallest_prime_factor.cpp) |
| **3. Distinct Prime Factorization** | [2_math/3_prime_factors.cpp](2_math/3_prime_factors.cpp) |
| **4. Efficient Prime Factorization** | [2_math/4_efficient_prime_factor_using_spf.cpp](2_math/4_efficient_prime_factor_using_spf.cpp) |
| **5. Smallest Prime Factor (Single Number)** | [2_math/5_smallest_prime_factor.cpp](2_math/5_smallest_prime_factor.cpp) |
| **6. Prime Check (Trial Division)** | [2_math/6_prime_check.cpp](2_math/6_prime_check.cpp) |
| **7. Divisors / Factors of a Number** | [2_math/7_factors_of_number.cpp](2_math/7_factors_of_number.cpp) |
| **8. Factorial Calculations** | [2_math/8_factorial.cpp](2_math/8_factorial.cpp) |
| **9. Inverse Factorial** | [2_math/9_inverse_factorial.cpp](2_math/9_inverse_factorial.cpp) |
| **10. Optimized nCr Calculations** | [2_math/10_optimised_ncr.cpp](2_math/10_optimised_ncr.cpp) |
| **11. Binary Exponentiation** | [2_math/11_binary_exponentiation.cpp](2_math/11_binary_exponentiation.cpp) |
| **12. nCr Simple Formula** | [2_math/12_ncr.cpp](2_math/12_ncr.cpp) |
| **13. Legendre's Formula (Power of p in N!)** | [2_math/13_power_of_x_in_factorial.cpp](2_math/13_power_of_x_in_factorial.cpp) |
| **14. Power of x in N** | [2_math/14_power_of_x_in_n.cpp](2_math/14_power_of_x_in_n.cpp) |

</details>

<details>
<summary><b>📂 3. Binary Search</b></summary>
<br>

| Algorithm / Technique | Source Code File |
| :--- | :--- |
| **1. Binary Search** | [3_binary_search/1_binary_search.cpp](3_binary_search/1_binary_search.cpp) |
| **2. Lower Bound** | [3_binary_search/2_lower_bound.cpp](3_binary_search/2_lower_bound.cpp) |
| **3. Upper Bound** | [3_binary_search/3_upper_bound.cpp](3_binary_search/3_upper_bound.cpp) |
| **4. Binary Search on Answers** | [3_binary_search/4_binary_search_on_answers.cpp](3_binary_search/4_binary_search_on_answers.cpp) |
| **5. Binary Search on Decimals** | [3_binary_search/5_binary_search_on_decimals.cpp](3_binary_search/5_binary_search_on_decimals.cpp) |

</details>

<details>
<summary><b>📂 4. Sorting</b></summary>
<br>

| Algorithm / Technique | Source Code File |
| :--- | :--- |
| **1. Merge Sort** | [4_sorting/1_merge_sort.cpp](4_sorting/1_merge_sort.cpp) |
| **2. Quick Sort** | [4_sorting/2_quick_sort.cpp](4_sorting/2_quick_sort.cpp) |

</details>

<details>
<summary><b>📂 5. Bit Manipulation</b></summary>
<br>

| Algorithm / Technique | Source Code File |
| :--- | :--- |
| **1. Count Set Bits** | [5_bit_manipulation/1_count_the_set_bits.cpp](5_bit_manipulation/1_count_the_set_bits.cpp) |
| **2. Lowest Set Bit Position** | [5_bit_manipulation/2_lowest_set_bit_position.cpp](5_bit_manipulation/2_lowest_set_bit_position.cpp) |
| **3. Highest Set Bit Position** | [5_bit_manipulation/3_highest_set_bit_position.cpp](5_bit_manipulation/3_highest_set_bit_position.cpp) |
| **4. Lowest Unset Bit Position** | [5_bit_manipulation/4_lowest_unset_bit_position.cpp](5_bit_manipulation/4_lowest_unset_bit_position.cpp) |
| **5. Highest Unset Bit Position** | [5_bit_manipulation/5_highest_unset_bit_position.cpp](5_bit_manipulation/5_highest_unset_bit_position.cpp) |
| **6. Highest Unset Bit (Significant)** | [5_bit_manipulation/6_highest_unset_bit_among_significant_bits.cpp](5_bit_manipulation/6_highest_unset_bit_among_significant_bits.cpp) |
| **7. Generate Subsets (Bitmasking)** | [5_bit_manipulation/7_generate_all_subset_using_bitmasking.cpp](5_bit_manipulation/7_generate_all_subset_using_bitmasking.cpp) |

</details>

<details>
<summary><b>📂 6. Graph Algorithms</b></summary>
<br>

| Algorithm / Technique | Source Code File |
| :--- | :--- |
| **1. Depth First Search (DFS)** | [6_graphs/1_depth_first_search.cpp](6_graphs/1_depth_first_search.cpp) |
| **2. Breadth First Search (BFS)** | [6_graphs/2_breadth_first_search.cpp](6_graphs/2_breadth_first_search.cpp) |
| **3. Find Level of Nodes** | [6_graphs/3_find_level_of_every_node.cpp](6_graphs/3_find_level_of_every_node.cpp) |
| **4. DFS Entry / Exit Timers** | [6_graphs/4_in_time_out_time.cpp](6_graphs/4_in_time_out_time.cpp) |

</details>

<details>
<summary><b>📂 7. Tree Algorithms</b></summary>
<br>

| Algorithm / Technique | Source Code File |
| :--- | :--- |
| **1. Precompute Parents** | [7_trees/1_get_the_parent_of_the_node.cpp](7_trees/1_get_the_parent_of_the_node.cpp) |
| **2. Count Children** | [7_trees/2_number_of_children_for_a_node.cpp](7_trees/2_number_of_children_for_a_node.cpp) |
| **3. Find Subtree Size** | [7_trees/3_find_subtree_size.cpp](7_trees/3_find_subtree_size.cpp) |
| **4. Farthest Leaf (Node Height)** | [7_trees/4_farthest_leaf_node_inside_subtree.cpp](7_trees/4_farthest_leaf_node_inside_subtree.cpp) |
| **5. Diameter of a Tree** | [7_trees/5_diameter_of_tree.cpp](7_trees/5_diameter_of_tree.cpp) |
| **6. Ancestor Query in O(1)** | [7_trees/6_ancestor_query.cpp](7_trees/6_ancestor_query.cpp) |

</details>

<details>
<summary><b>📂 8. Miscellaneous & Boilerplate</b></summary>
<br>

| Algorithm / Technique | Source Code File |
| :--- | :--- |
| **1. Boilerplate Template** | [8_misc/1_boilerplate.cpp](8_misc/1_boilerplate.cpp) |
| **2. Sort Map by Values** | [8_misc/2_sort_map_by_values.cpp](8_misc/2_sort_map_by_values.cpp) |

</details>

---

## 🛠️ Tech Stack & Requirements

* **Core Language:** C++17
* **Standard Library:** Standard Template Library (STL)
* **Optimization Flags:** `-O3` recommended for maximum performance in execution

---

## 💻 How to Use

All files are structured to read from standard input (`stdin`) and write to standard output (`stdout`). They can be compiled easily using any standard C++ compiler.

> [!NOTE]
> Ensure your compiler supports C++17 or above (`-std=c++17` flag).

### Compile a nested C++ file
```bash
g++ -std=c++17 -O3 1_arrays/1_prefix_sum.cpp -o solution
```

### Run
```bash
./solution < input.txt > output.txt
```

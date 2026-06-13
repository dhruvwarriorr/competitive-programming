<div align="center">

# 🚀 Competitive Programming & DSA Library

A highly optimized collection of Data Structures, Algorithms, and mathematical reference notes for Competitive Programming and coding assessments.

[![C++](https://img.shields.io/badge/C%2B%2B-17-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://en.cppreference.com/w/cpp/17)
[![DSA](https://img.shields.io/badge/DSA-Advanced-%23002f5c.svg?style=for-the-badge)](https://github.com/dhruvwarriorr/competitive-programming)
[![Platform](https://img.shields.io/badge/Competitive%20Programming-Elite-%230f2c59.svg?style=for-the-badge)](https://github.com/dhruvwarriorr/competitive-programming)
[![Environment](https://img.shields.io/badge/Mac%20OS-Black-%23000000.svg?style=for-the-badge&logo=apple&logoColor=white)](https://apple.com)

</div>

---

## 📊 Visual Topic Importance & Progress Matrix

| Topic | Importance | Status | Key Focus Areas |
| :--- | :--- | :--- | :--- |
| [📂 1_arrays](1_arrays) | ![Critical](https://img.shields.io/badge/Importance-Critical-red) | ![Done](https://img.shields.io/badge/Status-Done-green) | Sliding Window, Two Pointers, Prefix Sum |
| [📂 2_math](2_math) | ![Medium](https://img.shields.io/badge/Importance-Medium-orange) | ![Done](https://img.shields.io/badge/Status-Done-green) | Prime Sieve, GCD, Modular Arithmetic |
| [📂 3_binary_search](3_binary_search) | ![High](https://img.shields.io/badge/Importance-High-red) | ![Done](https://img.shields.io/badge/Status-Done-green) | Search Space Binary Search, Bounds |
| [📂 4_sorting](4_sorting) | ![Medium](https://img.shields.io/badge/Importance-Medium-orange) | ![Done](https://img.shields.io/badge/Status-Done-green) | Merge Sort, Quick Sort properties |
| [📂 5_bit_manipulation](5_bit_manipulation) | ![High](https://img.shields.io/badge/Importance-High-red) | ![Done](https://img.shields.io/badge/Status-Done-green) | Bitmasks, Subsets, Power Set |
| [📂 6_graphs](6_graphs) | ![Critical](https://img.shields.io/badge/Importance-Critical-red) | ![Learning](https://img.shields.io/badge/Status-Learning-yellow) | BFS, DFS, Shortest Paths |
| [📂 7_trees](7_trees) | ![Critical](https://img.shields.io/badge/Importance-Critical-red) | ![Learning](https://img.shields.io/badge/Status-Learning-yellow) | Traversals, BST, Tree DP |
| [📂 8_misc & 9_theory](8_misc) | ![Low](https://img.shields.io/badge/Importance-Low-blue) | ![In Progress](https://img.shields.io/badge/Status-In--Progress-yellow) | Code optimization & complexity templates |

---

## 📘 Theory & Cheatsheets Reference

Our hand-crafted mathematical reference guides can be accessed below:

* [📐 Mathematics Formulas](9_theory/math_formulas.md) — Arithmetic, algebraic, volume, and perimeter formulas.
* [📍 Coordinate Geometry](9_theory/coordinate_geometry.md) — Midpoints, distances, and triangle area coordinates.
* [🪵 Logarithms](9_theory/logarithms.md) — Logarithmic properties and digit calculations.
* [🎲 Combinatorics](9_theory/combinatorics.md) — Permutations, combinations, arrangements, and Stars & Bars theorem.
* [📈 Probability](9_theory/probability.md) — Probability properties, conditional rules, and expected values.
* [🔢 Modular Arithmetic](9_theory/modular_arithmetic.md) — Modular operations, properties, and Fermat's Little Theorem.
* [🧮 GCD & LCM](9_theory/gcd_lcm.md) — GCD and LCM equations and properties.
* [🕊️ Pigeonhole Principle](9_theory/pigeonhole_principle.md) — Pigeonhole principle explanation.
* [📏 Divisibility Rules](9_theory/divisibility_rules.md) — Prime divisibility checks.
* [🔌 Bit Manipulation Theory](9_theory/bit_manipulation_theory.md) — Bitwise operator tables, common tricks, std::bitset cheatsheets, and encoding.
* [🔄 Symmetries](9_theory/symmetries.md) — Mirror and rotational symmetry mapping rules.
* [🧿 Euler's Totient](9_theory/euler_totient.md) — Euler's totient product formula and divisors properties.

---

## 🔍 Interactive Topic Deep-Dives

Click to expand any section to view exact file breakdowns and algorithm implementations.

<details>
<summary><b>📂 4_sorting — Sorting Implementations</b></summary>
<br>

* [1_merge_sort.cpp](4_sorting/1_merge_sort.cpp) — Stable, divide-and-conquer sorting algorithm performing in $O(N \log N)$ time complexity.
* [2_quick_sort.cpp](4_sorting/2_quick_sort.cpp) — In-place, pivot-based sorting algorithm with average-case time complexity of $O(N \log N)$.

</details>

<details>
<summary><b>📂 5_bit_manipulation — Bitwise Tricks & Optimization</b></summary>
<br>

* [1_count_the_set_bits.cpp](5_bit_manipulation/1_count_the_set_bits.cpp) — Implementation of Brian Kernighan’s Algorithm to count set bits in $O(\text{set bits count})$ time.
* [2_lowest_set_bit_position.cpp](5_bit_manipulation/2_lowest_set_bit_position.cpp) — Isolates and extracts the position of the lowest set bit ($O(1)$ operations).
* [3_highest_set_bit_position.cpp](5_bit_manipulation/3_highest_set_bit_position.cpp) — Finds the most significant bit (MSB) position using bit operations.
* [4_lowest_unset_bit_position.cpp](5_bit_manipulation/4_lowest_unset_bit_position.cpp) — Computes the index of the first unset bit from the right.
* [5_highest_unset_bit_position.cpp](5_bit_manipulation/5_highest_unset_bit_position.svg) — Retrieves the position of the highest unset bit.
* [6_highest_unset_bit_among_significant_bits.cpp](5_bit_manipulation/6_highest_unset_bit_among_significant_bits.cpp) — Identifies the highest unset bit relative to the most significant bit.
* [7_generate_all_subset_using_bitmasking.cpp](5_bit_manipulation/7_generate_all_subset_using_bitmasking.cpp) — Generates all $2^N$ subsets of a set using binary representation index masks in $O(N \cdot 2^N)$ time.

</details>

---

## 💻 Compilation & Usage

All source implementations are ready-to-run. To compile files locally, run:

```bash
g++ -std=c++17 -O3 <path_to_file>.cpp -o solution
./solution < input.txt > output.txt
```

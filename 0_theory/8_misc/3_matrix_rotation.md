# Matrix Rotation & Mirroring

Index maps for rotating and flipping a grid, plus the in-place trick for square matrices.

### Core Concept
* **When to use:** Grid problems, image rotation, checking whether one board is a rotation/reflection of another.
* **Time Complexity:** $O(N \cdot M)$.
* **Space Complexity:** $O(1)$ in place (square), $O(N \cdot M)$ for rectangles.

For an $n \times n$ matrix, 0-based:

| Operation | Index map |
| :-- | :-- |
| Rotate 90° clockwise | $(i, j) \to (j,\ n - 1 - i)$ |
| Mirror left ↔ right | $(i, j) \to (i,\ n - 1 - j)$ |

### Core Logic
Rotating 90° clockwise equals **reverse the rows, then transpose**:

```cpp
reverse(a.begin(), a.end());
for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
        swap(a[i][j], a[j][i]);
```

Counter-clockwise is transpose, then reverse the rows. Rotating 180° is two 90° turns (or reverse every row and reverse the row order).

[View Full C++ Implementation](../../8_misc/3_matrix_rotation.cpp)

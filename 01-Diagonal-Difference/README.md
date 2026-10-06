# 01 - Diagonal Difference

## Problem Overview
Given a square matrix, calculate the absolute difference between the sums of its diagonals.

### Sample Input
```text
3
11 2 4
4 5 6
10 8 -12
```

### Explanation
- **Primary Diagonal:** $11 + 5 + (-12) = 4$
- **Secondary Diagonal:** $4 + 5 + 10 = 19$
- **Absolute Difference:** $|4 - 19| = 15$

---

## Complexity Analysis

| Metric | Complexity | Rationale |
|---|---|---|
| **Time Complexity** | $\mathcal{O}(N)$ | A single `for` loop iterates from $0$ to $N-1$, evaluating both diagonals simultaneously without needing an $\mathcal{O}(N^2)$ full matrix scan. |
| **Space Complexity** | $\mathcal{O}(1)$ | Only two scalar accumulator variables (`primary_sum` and `secondary_sum`) are used. |

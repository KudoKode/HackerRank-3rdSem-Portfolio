# 02 - Dynamic Array

## Problem Overview
Create a 2D array of $N$ empty arrays, process $Q$ queries of two types:
1. `Query 1 x y`: Append integer $y$ to array `arr[idx]` where $idx = (x \oplus lastAnswer) \pmod n$.
2. `Query 2 x y`: Assign value at `arr[idx][y % size]` to `lastAnswer`, and append `lastAnswer` to the answer array.

---

## Complexity Analysis

| Metric | Complexity | Rationale |
|---|---|---|
| **Time Complexity** | $\mathcal{O}(N + Q)$ | Initializing $N$ empty sequence containers takes $\mathcal{O}(N)$. Each of the $Q$ queries executes in $\mathcal{O}(1)$ amortized time for dynamic array append or direct index access. |
| **Space Complexity** | $\mathcal{O}(N + Q)$ | Storing elements across $N$ dynamic sequence lists and the output array bounds memory proportionally to the total queries processed. |

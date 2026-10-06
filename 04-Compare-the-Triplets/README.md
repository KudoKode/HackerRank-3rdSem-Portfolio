# 04 - Compare the Triplets

## Problem Overview
Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges, awarding points on a scale from 1 to 100 for three categories: problem clarity, originality, and difficulty.

- If $a[i] > b[i]$, Alice is awarded 1 point.
- If $a[i] < b[i]$, Bob is awarded 1 point.
- If $a[i] = b[i]$, neither person receives a point.

---

## Complexity Analysis

| Metric | Complexity | Rationale |
|---|---|---|
| **Time Complexity** | $\mathcal{O}(1)$ | The input size is strictly constrained to $N = 3$ triplets. Loop execution is fixed to exactly 3 iterations. |
| **Space Complexity** | $\mathcal{O}(1)$ | Only two integer counters (`alice_score` and `bob_score`) are allocated. |

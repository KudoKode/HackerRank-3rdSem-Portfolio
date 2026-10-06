# 05 - Sparse Arrays

## Problem Overview
There is a collection of input strings and a collection of query strings. For each query string, determine how many times it occurs in the list of input strings. Return an array of the results.

---

## Complexity Analysis

| Metric | Complexity | Rationale |
|---|---|---|
| **Time Complexity** | $\mathcal{O}(N + Q)$ | Preprocessing all $N$ input strings into a hash table (`std::unordered_map` / `collections.Counter`) requires $\mathcal{O}(N)$ average time. Each of the $Q$ queries performs an average $\mathcal{O}(1)$ lookup, yielding total time $\mathcal{O}(N + Q)$ instead of naive nested loop $\mathcal{O}(N \times Q)$. |
| **Space Complexity** | $\mathcal{O}(N)$ | The hash map holds at most $N$ unique string entries and their associated integer counts. |

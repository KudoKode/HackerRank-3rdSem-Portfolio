# HackerRank 3rd Semester Portfolio

[![HackerRank Badge](https://img.shields.io/badge/HackerRank-3%20Star%20Problem%20Solving-00EA64?logo=hackerrank&logoColor=white)](https://www.hackerrank.com/profile/KudoKode)
[![Course](https://img.shields.io/badge/Course-Portfolio%20Building%20B25CS0311-blue.svg)](#)
[![Language](https://img.shields.io/badge/Language-Python%20%7C%20C%2B%2B-orange.svg)](#)

## Activity 8: HackerRank Algorithmic Problem-Solving & Portfolio Integration

This repository hosts documented solutions, complexity analysis, and verification artifacts for **Activity 8** of the **Portfolio Building (B25CS0311)** studio curriculum for 3rd-Semester B.Tech Computer Science and Information Technology.

---

## Student Details

| Attribute | Details |
|---|---|
| **Student Name** | ABHISHEK MAURYA |
| **SRN / Roll No** | R25EJ004 |
| **Program** | B.Tech — Computer Science and Information Technology (CSIT) |
| **Semester** | 3rd Semester |
| **Institution** | REVA University |
| **Course** | Portfolio Building (`B25CS0311`) — Studio (0-0-2) |
| **HackerRank Profile** | [hackerrank.com/profile/KudoKode](https://www.hackerrank.com/profile/KudoKode) |
| **Target Milestone** | 3-Star Badge in Problem Solving / Python |

---

## Algorithmic Problem Set & Complexity Analysis

Below is the summary of the 5 mandatory algorithmic challenges with theoretical Time and Space complexities:

| # | Problem Name | Domain / Data Structure | Time Complexity | Auxiliary Space Complexity | Solution Link |
|:---:|:---|:---|:---:|:---:|:---:|
| 1 | **Diagonal Difference** | 2D Arrays / Matrices | $\mathcal{O}(N)$ | $\mathcal{O}(1)$ | [View Solution](./01-Diagonal-Difference/) |
| 2 | **Dynamic Array** | Dynamic Sequences & Bitwise XOR | $\mathcal{O}(N + Q)$ | $\mathcal{O}(N + Q)$ | [View Solution](./02-Dynamic-Array/) |
| 3 | **Time Conversion** | Strings & Modulo Arithmetic | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ | [View Solution](./03-Time-Conversion/) |
| 4 | **Compare the Triplets** | Static Array Comparison ($N=3$) | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ | [View Solution](./04-Compare-the-Triplets/) |
| 5 | **Sparse Arrays** | Hash Map Frequency Mapping | $\mathcal{O}(N + Q)$ | $\mathcal{O}(N)$ | [View Solution](./05-Sparse-Arrays/) |

---

## Repository Structure

```text
HackerRank-3rdSem-Portfolio/
├── 01-Diagonal-Difference/
│   ├── solution.py
│   ├── solution.cpp
│   └── README.md
├── 02-Dynamic-Array/
│   ├── solution.py
│   ├── solution.cpp
│   └── README.md
├── 03-Time-Conversion/
│   ├── solution.py
│   ├── solution.cpp
│   └── README.md
├── 04-Compare-the-Triplets/
│   ├── solution.py
│   ├── solution.cpp
│   └── README.md
├── 05-Sparse-Arrays/
│   ├── solution.py
│   ├── solution.cpp
│   └── README.md
└── README.md
```

---

## 200-Word Reflective Summary on Algorithmic Optimization

> Solving this curated set of HackerRank challenges reinforced the critical transition from naive brute-force coding to asymptotically optimal software design. In **Sparse Arrays**, an unoptimized nested loop leads to an $\mathcal{O}(N \times Q)$ time complexity, causing execution timeouts on larger input scales. By leveraging a hash map (`std::unordered_map` in C++ / `collections.Counter` in Python), frequencies are aggregated in a single $\mathcal{O}(N)$ preprocessing pass, enabling instantaneous $\mathcal{O}(1)$ lookups and reducing the total runtime to an optimal $\mathcal{O}(N + Q)$.
>
> Similarly, **Diagonal Difference** highlights loop efficiency: traversing both primary ($A[i][i]$) and secondary ($A[i][n-1-i]$) diagonals simultaneously within a single pass avoids redundant iterations and maintains $\mathcal{O}(1)$ auxiliary space. The **Dynamic Array** problem deepened my understanding of dynamic 2D sequence resizing and bitwise XOR query handling, while **Time Conversion** reinforced stringent edge-case handling for boundary transitions (12 AM to 00:00 vs. 12 PM remaining 12:00). Ultimately, this studio activity demonstrated that selecting proper data structures early prevents computational bottlenecks and guarantees scalability.

---

## Verification & Submission Artifacts

- **HackerRank Profile Link:** [https://www.hackerrank.com/profile/KudoKode](https://www.hackerrank.com/profile/KudoKode)
- **Status:** All 5 Challenges Solved with 100% Test Cases Passed (Optimal Time & Space Limits).
- **Badge Earned:** Problem Solving 3-Star Badge.
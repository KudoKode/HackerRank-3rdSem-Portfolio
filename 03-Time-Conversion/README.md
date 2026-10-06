# 03 - Time Conversion

## Problem Overview
Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.
- Note: 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

---

## Complexity Analysis

| Metric | Complexity | Rationale |
|---|---|---|
| **Time Complexity** | $\mathcal{O}(1)$ | String length is fixed at 10 characters (`hh:mm:ssAM`). Substring slicing and integer formatting execute in bounded constant time. |
| **Space Complexity** | $\mathcal{O}(1)$ | Operates using fixed 8-character output string buffer. |

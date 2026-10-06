"""
Problem 2: Dynamic Array
Platform: HackerRank
Topic: Data Structures / Dynamic Sequences & Bitwise Operations
Time Complexity: O(N + Q)
Space Complexity: O(N + Q)
"""

def dynamicArray(n, queries):
    """
    Simulates dynamic array operations with bitwise XOR indexing.
    """
    arr = [[] for _ in range(n)]
    lastAnswer = 0
    results = []

    for query in queries:
        q_type, x, y = query[0], query[1], query[2]
        idx = (x ^ lastAnswer) % n

        if q_type == 1:
            arr[idx].append(y)
        elif q_type == 2:
            element_idx = y % len(arr[idx])
            lastAnswer = arr[idx][element_idx]
            results.append(lastAnswer)

    return results

if __name__ == '__main__':
    n = 2
    queries = [
        [1, 0, 5],
        [1, 1, 7],
        [1, 0, 3],
        [2, 1, 0],
        [2, 1, 1]
    ]
    res = dynamicArray(n, queries)
    print(f"Dynamic Array Results: {res}")
    assert res == [7, 3], "Test failed!"

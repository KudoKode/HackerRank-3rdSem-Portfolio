"""
Problem 4: Compare the Triplets
Platform: HackerRank
Topic: Basic Implementation & Tuple Comparison
Time Complexity: O(1)
Space Complexity: O(1)
"""

def compareTriplets(a, b):
    """
    Compares categories between Alice (a) and Bob (b).
    Each list has exactly 3 elements.
    """
    alice_score = 0
    bob_score = 0

    for i in range(3):
        if a[i] > b[i]:
            alice_score += 1
        elif a[i] < b[i]:
            bob_score += 1

    return [alice_score, bob_score]

if __name__ == '__main__':
    a = [5, 6, 7]
    b = [3, 6, 10]
    res = compareTriplets(a, b)
    print(f"Comparison Result: {res}")
    assert res == [1, 1], "Test failed!"

"""
Problem 5: Sparse Arrays
Platform: HackerRank
Topic: Hash Maps / String Frequency Mapping
Time Complexity: O(N + Q)
Space Complexity: O(N)
"""

from collections import Counter

def matchingStrings(stringList, queries):
    """
    Computes frequency of each query string in stringList using a Hash Map (Counter).
    Avoids O(N * Q) brute-force nested iteration.
    """
    freq_map = Counter(stringList)
    return [freq_map[q] for q in queries]

if __name__ == '__main__':
    stringList = ['aba', 'baba', 'aba', 'xzxb']
    queries = ['aba', 'xzxb', 'ab']
    res = matchingStrings(stringList, queries)
    print(f"Sparse Arrays Results: {res}")
    assert res == [2, 1, 0], "Test failed!"

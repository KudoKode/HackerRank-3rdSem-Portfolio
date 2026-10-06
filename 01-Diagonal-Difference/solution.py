"""
Problem 1: Diagonal Difference
Platform: HackerRank
Topic: 2D Arrays / Matrices
Time Complexity: O(N)
Space Complexity: O(1)
"""

import sys

def diagonalDifference(arr):
    """
    Calculates the absolute difference between the sums of its diagonals.
    Single-pass O(N) traversal.
    """
    n = len(arr)
    primary_sum = 0
    secondary_sum = 0
    
    for i in range(n):
        primary_sum += arr[i][i]
        secondary_sum += arr[i][n - 1 - i]
        
    return abs(primary_sum - secondary_sum)

if __name__ == '__main__':
    # Sample Test Case Verification
    sample_matrix = [
        [11, 2, 4],
        [4, 5, 6],
        [10, 8, -12]
    ]
    result = diagonalDifference(sample_matrix)
    print(f"Diagonal Difference result: {result}")
    assert result == 15, "Test failed!"

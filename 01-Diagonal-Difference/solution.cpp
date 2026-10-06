/**
 * Problem 1: Diagonal Difference
 * Platform: HackerRank
 * Topic: 2D Arrays / Matrices
 * 
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

int diagonalDifference(const std::vector<std::vector<int>>& arr) {
    int n = arr.size();
    long long primary_sum = 0;
    long long secondary_sum = 0;

    for (int i = 0; i < n; i++) {
        primary_sum += arr[i][i];
        secondary_sum += arr[i][n - 1 - i];
    }

    return std::abs(primary_sum - secondary_sum);
}

int main() {
    std::vector<std::vector<int>> matrix = {
        {11, 2, 4},
        {4, 5, 6},
        {10, 8, -12}
    };

    int diff = diagonalDifference(matrix);
    std::cout << "Diagonal Difference: " << diff << std::endl;
    assert(diff == 15);
    return 0;
}

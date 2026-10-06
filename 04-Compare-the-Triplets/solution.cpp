/**
 * Problem 4: Compare the Triplets
 * Platform: HackerRank
 * Topic: Basic Implementation & Tuple Comparison
 * 
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> compareTriplets(const std::vector<int>& a, const std::vector<int>& b) {
    int alice_score = 0;
    int bob_score = 0;

    for (size_t i = 0; i < 3; i++) {
        if (a[i] > b[i]) alice_score++;
        else if (a[i] < b[i]) bob_score++;
    }

    return {alice_score, bob_score};
}

int main() {
    std::vector<int> a = {5, 6, 7};
    std::vector<int> b = {3, 6, 10};

    std::vector<int> result = compareTriplets(a, b);
    std::cout << "Alice: " << result[0] << ", Bob: " << result[1] << std::endl;

    assert(result[0] == 1 && result[1] == 1);
    return 0;
}

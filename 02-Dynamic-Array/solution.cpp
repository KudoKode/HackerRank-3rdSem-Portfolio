/**
 * Problem 2: Dynamic Array
 * Platform: HackerRank
 * Topic: Data Structures / Dynamic Sequences & Bitwise Operations
 * 
 * Time Complexity: O(N + Q)
 * Space Complexity: O(N + Q)
 */

#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> dynamicArray(int n, const std::vector<std::vector<int>>& queries) {
    std::vector<std::vector<int>> arr(n);
    std::vector<int> result;
    int lastAnswer = 0;

    for (const auto& q : queries) {
        int type = q[0];
        int x = q[1];
        int y = q[2];

        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            arr[idx].push_back(y);
        } else if (type == 2) {
            lastAnswer = arr[idx][y % arr[idx].size()];
            result.push_back(lastAnswer);
        }
    }

    return result;
}

int main() {
    int n = 2;
    std::vector<std::vector<int>> queries = {
        {1, 0, 5},
        {1, 1, 7},
        {1, 0, 3},
        {2, 1, 0},
        {2, 1, 1}
    };

    std::vector<int> res = dynamicArray(n, queries);
    std::cout << "Dynamic Array Outputs: ";
    for (int v : res) std::cout << v << " ";
    std::cout << std::endl;

    assert(res.size() == 2 && res[0] == 7 && res[1] == 3);
    return 0;
}

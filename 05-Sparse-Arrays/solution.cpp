/**
 * Problem 5: Sparse Arrays
 * Platform: HackerRank
 * Topic: Hash Maps / String Frequency Mapping
 * 
 * Time Complexity: O(N + Q)
 * Space Complexity: O(N)
 */

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cassert>

std::vector<int> matchingStrings(const std::vector<std::string>& stringList, 
                                const std::vector<std::string>& queries) {
    std::unordered_map<std::string, int> freq_map;
    
    // O(N) preprocessing into hash map
    for (const auto& s : stringList) {
        freq_map[s]++;
    }

    std::vector<int> results;
    results.reserve(queries.size());

    // O(Q) query lookup
    for (const auto& q : queries) {
        auto it = freq_map.find(q);
        results.push_back(it != freq_map.end() ? it->second : 0);
    }

    return results;
}

int main() {
    std::vector<std::string> stringList = {"aba", "baba", "aba", "xzxb"};
    std::vector<std::string> queries = {"aba", "xzxb", "ab"};

    std::vector<int> res = matchingStrings(stringList, queries);
    std::cout << "Sparse Arrays Results: ";
    for (int count : res) std::cout << count << " ";
    std::cout << std::endl;

    assert(res.size() == 3 && res[0] == 2 && res[1] == 1 && res[2] == 0);
    return 0;
}

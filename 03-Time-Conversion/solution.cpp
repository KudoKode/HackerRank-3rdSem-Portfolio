/**
 * Problem 3: Time Conversion
 * Platform: HackerRank
 * Topic: Strings & Logic
 * 
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cassert>

std::string timeConversion(std::string s) {
    int hour = std::stoi(s.substr(0, 2));
    std::string rest = s.substr(2, 6);
    std::string period = s.substr(8, 2);

    if (period == "AM") {
        if (hour == 12) hour = 0;
    } else { // PM
        if (hour != 12) hour += 12;
    }

    std::ostringstream oss;
    oss << std::setw(2) << std::setfill('0') << hour << rest;
    return oss.str();
}

int main() {
    assert(timeConversion("12:01:00PM") == "12:01:00");
    assert(timeConversion("12:01:00AM") == "00:01:00");
    assert(timeConversion("07:05:45PM") == "19:05:45");
    std::cout << "All Time Conversion test assertions passed." << std::endl;
    return 0;
}

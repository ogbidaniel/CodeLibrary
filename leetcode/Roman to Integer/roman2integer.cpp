#include <iostream>
#include <string>
#include <cassert>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        // Your implementation goes here
    }
};

// Test cases
void runTests() {
    Solution solution;

    // Test case 1
    string s1 = "III";
    int expected1 = 3;
    assert(solution.romanToInt(s1) == expected1);
    cout << "Test case 1 passed!" << endl;

    // Test case 2
    string s2 = "LVIII";
    int expected2 = 58;
    assert(solution.romanToInt(s2) == expected2);
    cout << "Test case 2 passed!" << endl;

    // Test case 3
    string s3 = "MCMXCIV";
    int expected3 = 1994;
    assert(solution.romanToInt(s3) == expected3);
    cout << "Test case 3 passed!" << endl;

    // Additional test case 4
    string s4 = "IX";
    int expected4 = 9;
    assert(solution.romanToInt(s4) == expected4);
    cout << "Test case 4 passed!" << endl;

    // Additional test case 5
    string s5 = "XLII";
    int expected5 = 42;
    assert(solution.romanToInt(s5) == expected5);
    cout << "Test case 5 passed!" << endl;
}

int main() {
    runTests();
    cout << "All test cases passed!" << endl;
    return 0;
}

#include <iostream>
#include <vector>

class Solution {
public:
    bool isPalindrome(int x) {
        int reversed = { 0 };
        using namespace std;
        int y = x;

        if ( x < 0 )
        {
            return false;
        }
        if ( x >= 0 && x < 10 )
        {
            return true;
        }

        while ( y != 0 )
        {
            int extractedDigit = y % 10;
            reversed = ( reversed * 10 ) + extractedDigit;
            y /= 10;
        }

        return x == reversed;
    }
};

int main() {
    Solution sol;

    // Test cases
    int testCases[] = { 121, -121, 10, 0, 12321, 1221, -1001, 1 };
    bool expectedResults[] = { true, false, false, true, true, true, false, true };

    for (int i = 0; i < sizeof(testCases) / sizeof(testCases[0]); ++i) {
        bool result = sol.isPalindrome(testCases[i]);
        std::cout << "Input: " << testCases[i] << ", Expected: " << expectedResults[i] 
                  << ", Result: " << result;
        if (result == expectedResults[i]) {
            std::cout << " - PASSED\n";
        } else {
            std::cout << " - FAILED\n";
        }
    }

    return 0;
}

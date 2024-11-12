#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        // code implementation here
        int strSize = s.length();
        int number = { 0 };
        unordered_map< char, int> roman;
        roman[ 'M' ] = 1000;
        roman[ 'D' ] = 500;
        roman[ 'C' ] = 100;
        roman[ 'L' ] = 50;
        roman[ 'X' ] = 10;
        roman[ 'V' ] = 5;
        roman[ 'I' ] = 1;
        
        for ( int i = 0; i < strSize; i++ )
        {
            // I can be placed before V (5) and X (10) to make 4 and 9. 
            // X can be placed before L (50) and C (100) to make 40 and 90. 
            // C can be placed before D (500) and M (1000) to make 400 and 900.
            if ( roman [ s [ i ] ] < roman [ s [ i + 1 ] ]){
                number -= roman [ s [ i ] ];
            }
            else {
                number += roman [ s [ i ] ];
            }
            }return number;
        };
};

// Test cases
int runTests() {
    Solution solution;
    int x {0};
    // Test case 1
    string s1 = "III";
    int expected1 = 3;
    if ( solution.romanToInt( s1 ) == expected1)
    {
        cout << solution.romanToInt( s1 ) << " Test case 1 passed!" << endl;
        x++;
    } else {
        cout << solution.romanToInt( s1 ) << " Test case 1 failed!" << endl;
    }
    

    // Test case 2
    string s2 = "LVIII";
    int expected2 = 58;
    if ( solution.romanToInt( s2 ) == expected2)
    {
        x++;
        cout << solution.romanToInt( s2 ) << " Test case 2 passed!" << endl;
    } else {
        cout << solution.romanToInt( s2 ) << " Test case 2 failed!" << endl;
    }

    // Test case 3
    string s3 = "MCMXCIV";
    int expected3 = 1994;
    if ( solution.romanToInt( s3 ) == expected3)
    {
        cout << solution.romanToInt( s3 ) << " Test case 3 passed!" << endl;
        x++;
    } else {
        cout << solution.romanToInt( s3 ) << " Test case 3 failed!" << endl;
    }

    // Additional test case 4
    string s4 = "IX";
    int expected4 = 9;
    if (solution.romanToInt(s4) == expected4)
    {
        cout << solution.romanToInt( s4 ) << " Test case 4 passed!" << endl;
        x++;
    } else {
        cout << solution.romanToInt( s4 ) << " Test case 4 failed!" << endl;
    }

    // Additional test case 5
    string s5 = "XLII";
    int expected5 = 42;
    if (solution.romanToInt(s5) == expected5)
    {
        cout << solution.romanToInt( s5 ) << " Test case 5 passed!" << endl;
        x++;
    } else {
        cout << solution.romanToInt( s5 ) << " Test case 5 failed!" << endl;
    }
    return x;
}

int main() {
    int x = runTests();
    cout << x << "/5 test cases passed!" << endl;
    return 0;
}

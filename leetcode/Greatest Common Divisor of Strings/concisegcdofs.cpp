#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // Check if concatenation of both Strings is equal
        if (str1 + str2 != str2 + str1) {
            return "";
        }

        // Use the GCD algorithm on the lengths of the two strings
        int gcdlength = gcd(str1.length(), str2.length());
        return str1.substr(0, gcdlength);
    }
};

int main() {
    Solution solution;

    // Test cases
    string str1 = "ABCABC", str2 = "ABC";
    cout << "GCD of \"" << str1 << "\" and \"" << str2 << "\": " 
         << solution.gcdOfStrings(str1, str2) << endl;

    str1 = "ABABAB", str2 = "ABAB";
    cout << "GCD of \"" << str1 << "\" and \"" << str2 << "\": " 
         << solution.gcdOfStrings(str1, str2) << endl;

    str1 = "LEET", str2 = "CODE";
    cout << "GCD of \"" << str1 << "\" and \"" << str2 << "\": " 
         << solution.gcdOfStrings(str1, str2) << endl;

    cin.get();
    return 0;

}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Your code goes here
        for ( int i = 0; i < strs.size(); i++)
    }
};

int main(){
    Solution sol;
    vector<string> test1 = {"flower","flow","flight"};
    vector<string> test2 = {"dog","racecar","car"};
    vector<string> test3 = {"a"}; // Edge case: single string input
    vector<string> test4 = {"", "apple", "banana"}; // Edge case: empty string in the input

    cout << "Test 1: " << sol.longestCommonPrefix(test1) << endl; // Expected output: "fl"
    cout << "Test 2: " << sol.longestCommonPrefix(test2) << endl; // Expected output: ""
    cout << "Test 3: " << sol.longestCommonPrefix(test3) << endl; // Expected output: "a"
    cout << "Test 4: " << sol.longestCommonPrefix(test4) << endl; // Expected output: ""
    
    return 0;
}

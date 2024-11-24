#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Your code goes here
        int strsSize = strs.size();
        string prefix = "";
        for ( int i = 0; i < strs[0].length(); i++){
            char currentChar = strs[0][i];
            for ( int j = 0; j < strs.size(); j++){
                if (strs[j][i] != currentChar){
                    return prefix;
                }
            }
            prefix += currentChar;
        }
        return prefix;
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

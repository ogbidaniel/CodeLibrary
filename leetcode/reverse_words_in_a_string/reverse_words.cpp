#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

string reverseWords(string s) {
    // Step 1: Trim spaces and split words
    stringstream ss(s);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    // Step 2: Reverse the vector of words
    reverse(words.begin(), words.end());

    // Step 3: Join the words with a single space
    string result;
    for (int i = 0; i < words.size(); ++i) {
        result += words[i];
        if (i < words.size() - 1) {
            result += " ";
        }
    }

    return result;
}

int main() {
    string s = "  hello   world  ";
    cout << '"' << reverseWords(s) << '"' << endl; // Output: "world hello"
    return 0;
}
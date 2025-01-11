// 443. String Compression
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main()
{
    vector<char> chars = {'a','a','b','b','c','c','c'};
    map<char, int> charCount;
    string s = "";

    for (char c : chars) {
        charCount[c]++;
    }

    // Display the character counts
    for (const auto& pair : charCount) {
        s += pair.first;
        if (pair.second < 10) {
            s += to_string(pair.second);
        } else {
            string countStr = to_string(pair.second);
            for (char digit : countStr) {
                s += digit;
            }
        }
    }
    cout << s << endl;

    cin.get();
    return 0;
}
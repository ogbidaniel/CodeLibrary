// 392. Is Substring
#include <iostream>
#include <string>

using namespace std;

int main() {
    // initialize s and t
    string s = "abc";
    string t = "ahbgdc";
    
    int sx = 0;
    string sub = "";
        
    for (int tx = 0; tx < t.size(); tx++) {
        if (t[tx] == s[sx]) {
            sub += t[tx];
            sx++;
        }
    }
    cout << sub << endl;
    bool output = (sub == s);


    cin.get();
    return 0;
}
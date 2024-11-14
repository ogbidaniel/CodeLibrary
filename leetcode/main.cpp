#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;


int main() {
    vector<string> strs = {"flower","flow","flight"};
    int strsSize = strs.size();
    for ( int i = 0; i < strsSize; i++){
            for (int j = 0; j < strs[i].length(); j++){
                cout << strs[i][j] << ' ';
            } 
            cout << endl;
        }

    return 0;
}
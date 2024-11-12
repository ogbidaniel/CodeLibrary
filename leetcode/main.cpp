#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;



int main()
{
    using namespace std;
    string str = "XXVII";
    int number = { 0 };
    for (int i = str.length() - 1; i >= 0; i--)     // iterating through the string backwards
    {
        cout << str[i] << endl; 
    }

    cout << "Correct answer is " << 27;

    return 0;
}
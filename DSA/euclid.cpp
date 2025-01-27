// Euclid's GCD algorithm
#include <iostream>

using namespace std;

int main()
{
    int m, n, output;
    cout << "Enter 2 numbers: \n";
    cout << "Num 1: ";
    cin >> m;
    cout << "Num 2: ";
    cin >> n;
    while (n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }
    cout << "GCD = " << m << endl;
    
    cin.get();
    return 0;
}
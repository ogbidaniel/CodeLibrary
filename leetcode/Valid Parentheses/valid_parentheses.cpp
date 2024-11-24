#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>
using namespace std;

bool isValid(string s) {
    stack<char> parentheses;
    unordered_map<char, char> matchingParentheses{
        {')', '('},
        {']', '['},
        {'}', '{'}
    };

    cout << "\nProcessing string: " << s << endl;

    for (int i = 0; i < s.length(); i++) {
        cout << "\nStep " << i + 1 << ": Processing '" << s[i] << "'";

        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            cout << " --> Push to stack\n";
            parentheses.push(s[i]);
            cout << "Stack: ";
            stack<char> temp = parentheses; // Copy stack to display its content
            while (!temp.empty()) {
                cout << temp.top() << " ";
                temp.pop();
            }
            cout << endl;
        } 
        else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
            if (parentheses.empty()) {
                cout << " --> Stack is empty, invalid\n";
                return false;
            } else if (parentheses.top() != matchingParentheses[s[i]]) {
                cout << " --> Mismatch: top of stack is '" << parentheses.top() 
                     << "', expected '" << matchingParentheses[s[i]] << "'\n";
                return false;
            } else {
                cout << " --> Match found: top of stack is '" << parentheses.top() 
                     << "', popping it\n";
                parentheses.pop();
                cout << "Stack after pop: ";
                stack<char> temp = parentheses; // Copy stack to display its content
                while (!temp.empty()) {
                    cout << temp.top() << " ";
                    temp.pop();
                }
                cout << (parentheses.empty() ? "(empty)" : "") << endl;
            }
        }
    }

    cout << "\nFinal stack state: ";
    if (parentheses.empty()) {
        cout << "(empty), string is valid\n";
        return true;
    } else {
        cout << "non-empty, string is invalid\n";
        return false;
    }
}

int main() {
    string test1 = "(})";       // true
    string test2 = "[";         // false
    string test3 = "(()[{}])";  // true
    string test4 = ")()";       // false
    string test5 = "[[[[";      // false

    if (isValid(test1)) {
        cout << "Test 1 passed.\n";
    } else {
        cout << "Test 1 failed.\n";
    }

    if (!isValid(test2)) {
        cout << "Test 2 passed.\n";
    } else {
        cout << "Test 2 failed.\n";
    }

    if (isValid(test3)) {
        cout << "Test 3 passed.\n";
    } else {
        cout << "Test 3 failed.\n";
    }

    if (!isValid(test4)) {
        cout << "Test 4 passed.\n";
    } else {
        cout << "Test 4 failed.\n";
    }

    if (!isValid(test5)) {
        cout << "Test 5 passed.\n";
    } else {
        cout << "Test 5 failed.\n";
    }

    return 0;
}
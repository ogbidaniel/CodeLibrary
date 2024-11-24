// Contains Duplicate LeetCode 217
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> set;
    for (int num : nums) {
        if (set.find(num) != set.end()) {
            return true;
        }
        else {
            set.insert(num);
        }
    }
    return false;
}

int main() {
    vector<int> test1 = {1, 2, 3, 4, 5};
    if (containsDuplicate(test1)) {
        cout << "Test 1: Failed (Expected False, Got True)" << endl;
    } else {
        cout << "Test 1: Passed" << endl;
    }

    vector<int> test2 = {1, 2, 3, 1, 5};
    if (!containsDuplicate(test2)) {
        cout << "Test 2: Failed (Expected True, Got False)" << endl;
    } else {
        cout << "Test 2: Passed" << endl;
    }

    vector<int> test3 = {};
    if (containsDuplicate(test3)) {
        cout << "Test 3: Failed (Expected False, Got True)" << endl;
    } else {
        cout << "Test 3: Passed" << endl;
    }

    vector<int> test4 = {1, 1, 1, 1, 1};
    if (!containsDuplicate(test4)) {
        cout << "Test 4: Failed (Expected True, Got False)" << endl;
    } else {
        cout << "Test 4: Passed" << endl;
    }

    vector<int> test5 = {1, 2, 3, 4, 5, -1, -2, -1};
    if (!containsDuplicate(test5)) {
        cout << "Test 5: Failed (Expected True, Got False)" << endl;
    } else {
        cout << "Test 5: Passed" << endl;
    }

    return 0;
}

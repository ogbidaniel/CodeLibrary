#include <iostream>
#include <vector>
#include <iomanip> // For formatting output
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0, right = 0;

        while (right < nums.size()) {
            // Visualization: Print the current state
            cout << "Array: ";
            for (int i = 0; i < nums.size(); ++i) {
                if (i == left && i == right) {
                    cout << "[" << nums[i] << "] ";
                } else if (i == left) {
                    cout << "(" << nums[i] << ") ";
                } else if (i == right) {
                    cout << "{" << nums[i] << "} ";
                } else {
                    cout << nums[i] << " ";
                }
            }
            cout << "\nLeft Index: " << left << ", Value: " << nums[left] 
                 << "\nRight Index: " << right << ", Value: " << nums[right] 
                 << "\n\n";

            // Process the current element
            if (nums[right] != 0) {
                swap(nums[left], nums[right]);
                cout << "Swap!\n\n";
                left++;
            }
            right++;
        }
    }
};

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    Solution sol;

    cout << "Initial Array:\n";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << "\n\nStarting Move Zeroes Visualization:\n\n";
    sol.moveZeroes(nums);

    cout << "\nFinal Array:\n";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    cin.get();
    return 0;
}

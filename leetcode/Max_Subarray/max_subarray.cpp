#include <iostream>
#include <vector>
#include <algorithm> // For std::max

using namespace std;

// Your Solution Class
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currSum += nums[i];

            if (currSum > maxSum) {
                maxSum = currSum;
            }

            if (currSum < 0) {
                currSum = 0;
            }
        }
        return maxSum;
    }
};

// Function to Print Vector (for better readability)
void printVector(const vector<int>& vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        if (i != vec.size() - 1)
            cout << ", ";
    }
    cout << "]";
}

int main() {
    // Instantiate the Solution class
    Solution solution;

    // Define Test Cases
    vector<vector<int>> testCases = {
        {-2, 1, -3, 4, -1, 2, 1, -5, 4}, // Expected Output: 6
        {1},                               // Expected Output: 1
        {5, 4, -1, 7, 8},                  // Expected Output: 23
        {-1, -2, -3, -4},                  // Edge Case: All Negative Numbers (Expected Output: -1)
        {0, 0, 0, 0},                       // Edge Case: All Zeros (Expected Output: 0)
        {2, -1, 2, 3, -9, 4, 5, -4},        // Mixed Positive and Negative (Expected Output: 9)
    };

    // Define Expected Outputs for Reference
    vector<int> expectedOutputs = {6, 1, 23, -1, 0, 9};

    // Iterate Through Test Cases
    for (size_t i = 0; i < testCases.size(); ++i) {
        vector<int> nums = testCases[i];
        int result = solution.maxSubArray(nums);
        cout << "Test Case " << i + 1 << ":\n";
        cout << "Input: ";
        printVector(nums);
        cout << "\n";
        cout << "Expected Output: " << expectedOutputs[i] << "\n";
        cout << "Your Output: " << result << "\n";
        if (result == expectedOutputs[i]) {
            cout << "Result: \033[32mPassed\033[0m\n"; // Green color for pass
        } else {
            cout << "Result: \033[31mFailed\033[0m\n"; // Red color for fail
        }
        cout << "-----------------------------\n";
    }

    return 0;
}

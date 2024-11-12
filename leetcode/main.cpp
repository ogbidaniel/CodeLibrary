#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twosum(vector<int> &nums, int target){
    int arrSize = nums.size();
    vector<int> output (2);
    unordered_map<int, int> numMap;

    for (int i = 0; i < arrSize; i++){
        int complement = target - nums[i];
        if (numMap.find(complement) == numMap.end()){
            numMap[nums[i]] = i;
        }
        else {
            output[0] = i;
            output[1] = numMap[complement];
        }
    }
    return output;
}

bool test(vector<int> nums, int target, vector<int> expected) {
    vector<int> result = twosum(nums, target);

    if (result == expected) {
        cout << "Test passed!" << endl;
        return true;
    } else {
        cout << "Test failed. ";
        cout << "Expected: [" << expected[0] << ", " << expected[1] << "] ";
        cout << "Got: [" << result[0] << ", " << result[1] << "]" << endl;
        return false;
    }
}

int main() {
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> expected1 = {0, 1}; 

    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> expected2 = {1, 2};

    test(nums1, target1, expected1);
    test(nums2, target2, expected2);

    return 0;
}
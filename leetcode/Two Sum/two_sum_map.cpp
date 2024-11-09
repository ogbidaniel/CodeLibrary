#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twosum(vector<int>& nums, int target) {

        // declare the key variables for parsing array and getting output
        int arrLen = nums.size();
        int i;
        vector<int> output (2);

        unordered_map< int, int > num_map;

        for ( i = 0; i < arrLen; i++ )
        {
            // calculate the complement of each array in the array
            int complement = target - nums [ i ];
            if ( num_map.find( complement ) != num_map.end() )
            {
                output [ 0 ] = i;                                   
                output [ 1 ] = num_map [ complement ];              
            }
            num_map [ nums [ i ] ] = i;                             // num_map [ value ] = index;
        }
        return output;
    }
};

int main() {
    Solution sol;

    // Test case 1
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = sol.twosum(nums1, target1);
    cout << "Indices for target " << target1 << ": [" << result1[0] << ", " << result1[1] << "]" << endl; 

    // Test case 2 (add more test cases as needed)
    // ...

    return 0;
}
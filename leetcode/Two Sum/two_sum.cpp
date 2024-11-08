#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twosum(vector<int>& nums, int target) {
        int arrLen = nums.size();
        int i;
        int j;
        vector<int> output;
        for ( i = 0; i < arrLen; i++ )
        {
            // declare second pointer and inner loop
            for ( j = arrLen - 1; j != i; j-- )
            {
                if ( nums [ i ] + nums [ j ] == target )
                {
                    output.resize ( 2 );
                    output [ 0 ] = i;
                    output [ 1 ] = j;
                    return  output;
                }
                else 
                {
                    continue;
                }
            }
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

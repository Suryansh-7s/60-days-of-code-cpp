#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

class Solution {
    public:
        int pivotIndex(vector<int>& nums) {
          int left = 0, right = accumulate(nums.begin(), nums.end(), 0);
            for (int i = 0; i < nums.size(); ++i) {
                right -= nums[i];
                if (left == right) {
                    return i;
                }
                left += nums[i];
            }
            return -1;   
        }
};

int main() {
    Solution solution;
    
    // Test case 1: [1,7,3,6,5,6]
    vector<int> nums1 = {1, 7, 3, 6, 5, 6};
    cout << "Test case 1: [1,7,3,6,5,6]" << endl;
    cout << "Pivot index: " << solution.pivotIndex(nums1) << endl; // Expected: 3
    
    // Test case 2: [1,2,3]
    vector<int> nums2 = {1, 2, 3};
    cout << "Test case 2: [1,2,3]" << endl;
    cout << "Pivot index: " << solution.pivotIndex(nums2) << endl; // Expected: -1
    
    // Test case 3: [2,1,-1]
    vector<int> nums3 = {2, 1, -1};
    cout << "Test case 3: [2,1,-1]" << endl;
    cout << "Pivot index: " << solution.pivotIndex(nums3) << endl; // Expected: 0
    
    return 0;
}
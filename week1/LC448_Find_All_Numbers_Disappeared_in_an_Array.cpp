#include <vector>
#include <cstdlib>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;

    for (const int num : nums) {
      const int index = abs(num) - 1;
      nums[index] = -abs(nums[index]);
    }

    for (int i = 0; i < nums.size(); ++i)
      if (nums[i] > 0)
        ans.push_back(i + 1);

    return ans;
  }
};

int main() {
    Solution solution;
    
    // Test case: [4,3,2,7,8,2,3,1]
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    
    cout << "Input: [4,3,2,7,8,2,3,1]" << endl;
    
    vector<int> result = solution.findDisappearedNumbers(nums);
    
    cout << "Output: [";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1) cout << ",";
    }
    return 0;
}
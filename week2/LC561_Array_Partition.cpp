#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int arrayPairSum(std::vector<int>& nums) {
        int ans = 0;
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i += 2)
            ans += nums[i];
        return ans;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1, 4, 3, 2};
    int result = solution.arrayPairSum(nums);
    std::cout << "Test case: [1, 4, 3, 2]" << std::endl;
    std::cout << "Expected: 4" << std::endl;
    std::cout << "Result: " << result << std::endl;
    return 0;
}
  
#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> getConcatenation(std::vector<int>& nums) {
        const int n = nums.size();
        for (int i = 0; i < n; ++i)
            nums.push_back(nums[i]);
        return nums;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1, 2, 1};
    std::vector<int> result = solution.getConcatenation(nums);
    std::cout << "Test case: [1, 2, 1]" << std::endl;
    std::cout << "Expected: [1, 2, 1, 1, 2, 1]" << std::endl;
    std::cout << "Result: [";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i];
        if (i < result.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
    return 0;
}
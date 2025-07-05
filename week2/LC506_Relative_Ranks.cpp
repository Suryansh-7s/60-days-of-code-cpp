#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

class Solution {
public:
    std::vector<std::string> findRelativeRanks(std::vector<int>& nums) {
        const int n = nums.size();
        std::vector<std::string> ans(n);
        std::vector<int> indices(n);
    
        std::iota(indices.begin(), indices.end(), 0);
    
        std::sort(indices.begin(), indices.end(),
                     [&](const int a, const int b) { return nums[a] > nums[b]; });
    
        for (int i = 0; i < n; ++i)
          if (i == 0)
            ans[indices[0]] = "Gold Medal";
          else if (i == 1)
            ans[indices[1]] = "Silver Medal";
          else if (i == 2)
            ans[indices[2]] = "Bronze Medal";
          else
            ans[indices[i]] = std::to_string(i + 1);
            
        return ans;
    }
};

int main() {
    Solution solution;
    
    // Test case 1: [5,4,3,2,1]
    std::vector<int> nums1 = {5, 4, 3, 2, 1};
    std::vector<std::string> result1 = solution.findRelativeRanks(nums1);
    
    std::cout << "Test case 1: [5,4,3,2,1]" << std::endl;
    std::cout << "Expected: [\"Gold Medal\",\"Silver Medal\",\"Bronze Medal\",\"4\",\"5\"]" << std::endl;
    std::cout << "Result: [";
    for (size_t i = 0; i < result1.size(); ++i) {
        std::cout << "\"" << result1[i] << "\"";
        if (i < result1.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl << std::endl;
    
    // Test case 2: [10,3,8,9,4]
    std::vector<int> nums2 = {10, 3, 8, 9, 4};
    std::vector<std::string> result2 = solution.findRelativeRanks(nums2);
    
    std::cout << "Test case 2: [10,3,8,9,4]" << std::endl;
    std::cout << "Expected: [\"Gold Medal\",\"5\",\"Bronze Medal\",\"Silver Medal\",\"4\"]" << std::endl;
    std::cout << "Result: [";
    for (size_t i = 0; i < result2.size(); ++i) {
        std::cout << "\"" << result2[i] << "\"";
        if (i < result2.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
    
    return 0;
}
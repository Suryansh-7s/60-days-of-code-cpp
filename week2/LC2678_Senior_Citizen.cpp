#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    int countSeniors(std::vector<std::string>& details) {
        int n = 0;
        for (auto& x : details) {
            int age = std::stoi(x.substr(11, 2));
            n += age > 60;
        }
        return n;
    }
};

int main() {
    Solution solution;
    std::vector<std::string> details = {"7868190130M7522", "5303914400F9211", "9273338290F4010"};
    int result = solution.countSeniors(details);
    std::cout << "Test case: [\"7868190130M7522\", \"5303914400F9211\", \"9273338290F4010\"]" << std::endl;
    std::cout << "Expected: 2" << std::endl;
    std::cout << "Result: " << result << std::endl;
    return 0;
}
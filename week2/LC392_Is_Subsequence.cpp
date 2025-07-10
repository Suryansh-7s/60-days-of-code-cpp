#include <iostream>
#include <string>

class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        if (s.empty()) return true;
        int i = 0;
        for (const char c : t) {
            if (s[i] == c && ++i == s.length())
                return true;
        }
        return false;
    }
};

int main() {
    Solution solution;
    std::string s = "abc";
    std::string t = "ahbgdc";
    bool result = solution.isSubsequence(s, t);
    std::cout << "Test case: s = \"abc\", t = \"ahbgdc\"" << std::endl;
    std::cout << "Expected: true" << std::endl;
    std::cout << "Result: " << (result ? "true" : "false") << std::endl;
    return 0;
}
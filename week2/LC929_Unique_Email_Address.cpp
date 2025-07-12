#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

class Solution {
    public:
        int numUniqueEmails(std::vector<std::string>& emails) {
         std::unordered_set<std::string> normalized;
    
        for (const std::string& email : emails) {
          std::string local;
          for (const char c : email) {
            if (c == '+' || c == '@')
              break;
            if (c == '.')
              continue;
            local += c;
          }
          std::string atDomain = email.substr(email.find('@'));
          normalized.insert(local + atDomain);
        }
    
        return normalized.size();
         
        }
    };

int main() {
    Solution solution;
    
    // Test case
    std::vector<std::string> emails = {
        "test.email+alex@leetcode.com",
        "test.e.mail+bob.cathy@leetcode.com",
        "testemail+david@lee.tcode.com"
    };
    
    int result = solution.numUniqueEmails(emails);
    
    std::cout << "Input emails:" << std::endl;
    for (const std::string& email : emails) {
        std::cout << "  " << email << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Number of unique emails: " << result << std::endl;
    
    return 0;
}
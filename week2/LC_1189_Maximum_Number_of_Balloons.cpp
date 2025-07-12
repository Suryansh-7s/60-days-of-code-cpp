#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>

class Solution {
    public:
        int maxNumberOfBalloons(std::string text) {
          int ans = INT_MAX;
        std::vector<int> count(26);
    
        for (char c : text)
          ++count[c - 'a'];
    
        for (char c : std::string("ban"))
          ans = std::min(ans, count[c - 'a']);
    
        for (char c : std::string("lo"))
          ans = std::min(ans, count[c - 'a'] / 2);
    
        return ans;   
        }
    };

int main() {
    Solution solution;
    std::string text = "loonbalxballpoon";
    int result = solution.maxNumberOfBalloons(text);
    std::cout << "Input text: " << text << std::endl;
    std::cout << "Maximum number of 'balloon': " << result << std::endl;
    return 0;
}
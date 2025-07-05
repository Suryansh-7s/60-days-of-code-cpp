#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

class Solution {
public:
    std::vector<std::string> findWords(std::vector<std::string>& words) {
        std::vector<std::string> ans;
        const std::vector<int> rows{2, 3, 3, 2, 1, 2, 2, 2, 1, 2, 2, 2, 3,
                               3, 1, 1, 1, 1, 2, 1, 1, 3, 1, 3, 1, 3};
        for (const std::string& word : words) {
            std::string lowerWord = word;
            std::transform(lowerWord.begin(), lowerWord.end(), lowerWord.begin(), ::tolower);
            const int row = rows[lowerWord[0] - 'a'];
            const bool isValid = std::all_of(
                lowerWord.begin(), lowerWord.end(), [&](char c) { return rows[c - 'a'] == row; });
            if (isValid)
                ans.push_back(word);
        }
        return ans;
    }
};

int main() {
    Solution solution;
    
    // Test case 1: ["Hello","Alaska","Dad","Peace"]
    std::vector<std::string> words1 = {"Hello", "Alaska", "Dad", "Peace"};
    std::vector<std::string> result1 = solution.findWords(words1);
    
    std::cout << "Test case 1: [\"Hello\",\"Alaska\",\"Dad\",\"Peace\"]" << std::endl;
    std::cout << "Expected: [\"Alaska\",\"Dad\"]" << std::endl;
    std::cout << "Result: [";
    for (size_t i = 0; i < result1.size(); ++i) {
        std::cout << "\"" << result1[i] << "\"";
        if (i < result1.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl << std::endl;
    
    // Test case 2: ["omk"]
    std::vector<std::string> words2 = {"omk"};
    std::vector<std::string> result2 = solution.findWords(words2);
    
    std::cout << "Test case 2: [\"omk\"]" << std::endl;
    std::cout << "Expected: []" << std::endl;
    std::cout << "Result: [";
    for (size_t i = 0; i < result2.size(); ++i) {
        std::cout << "\"" << result2[i] << "\"";
        if (i < result2.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl << std::endl;
    
    // Test case 3: ["adsdf","sfd"]
    std::vector<std::string> words3 = {"adsdf", "sfd"};
    std::vector<std::string> result3 = solution.findWords(words3);
    
    std::cout << "Test case 3: [\"adsdf\",\"sfd\"]" << std::endl;
    std::cout << "Expected: [\"adsdf\",\"sfd\"]" << std::endl;
    std::cout << "Result: [";
    for (size_t i = 0; i < result3.size(); ++i) {
        std::cout << "\"" << result3[i] << "\"";
        if (i < result3.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
    
    return 0;
}
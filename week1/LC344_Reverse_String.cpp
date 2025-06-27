#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int j= s.size() - 1;
            while(i<j)
            swap(s[i++], s[j--]);
        }
};

// Test harness for local execution
#include <iostream>

int main() {
    std::vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    Solution sol;
    sol.reverseString(s);
    for (char c : s) {
        std::cout << c;
    }
    std::cout << std::endl;
    return 0;
}
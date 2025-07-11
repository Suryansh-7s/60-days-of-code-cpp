#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
    public:
        bool isIsomorphic(string s, string t) {
            vector<int> charToIndex_s(128, 0);
            vector<int> charToIndex_t(128, 0);
    
            for(int i=0; i<s.length(); ++i){
                if(charToIndex_s[s[i]] != charToIndex_t[t[i]])
                    return false;
                charToIndex_s[s[i]] = i+1;
                charToIndex_t[t[i]] = i+1;
            }
            return true;
        }
};

int main() {
    Solution solution;
    
    // Test case 1: "egg" and "add"
    string s1 = "egg", t1 = "add";
    cout << "Test case 1: s = \"" << s1 << "\", t = \"" << t1 << "\"" << endl;
    cout << "Is isomorphic: " << (solution.isIsomorphic(s1, t1) ? "true" : "false") << endl; // Expected: true
    
    // Test case 2: "foo" and "bar"
    string s2 = "foo", t2 = "bar";
    cout << "Test case 2: s = \"" << s2 << "\", t = \"" << t2 << "\"" << endl;
    cout << "Is isomorphic: " << (solution.isIsomorphic(s2, t2) ? "true" : "false") << endl; // Expected: false
    
    // Test case 3: "paper" and "title"
    string s3 = "paper", t3 = "title";
    cout << "Test case 3: s = \"" << s3 << "\", t = \"" << t3 << "\"" << endl;
    cout << "Is isomorphic: " << (solution.isIsomorphic(s3, t3) ? "true" : "false") << endl; // Expected: true
    
    // Test case 4: "badc" and "baba"
    string s4 = "badc", t4 = "baba";
    cout << "Test case 4: s = \"" << s4 << "\", t = \"" << t4 << "\"" << endl;
    cout << "Is isomorphic: " << (solution.isIsomorphic(s4, t4) ? "true" : "false") << endl; // Expected: false
    
    return 0;
}
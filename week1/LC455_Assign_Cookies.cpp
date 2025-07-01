#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int i=0;
        for(const int cookie : s){
            if(i<g.size() && g[i]<=cookie){
                i++;
            }
        }
        return i;
    }
};

int main() {
    Solution solution;
    
    // Test case 1: Example from LeetCode
    vector<int> g1 = {1, 2, 3};
    vector<int> s1 = {1, 1};
    cout << "Test 1: g = [1,2,3], s = [1,1]" << endl;
    cout << "Expected: 1, Got: " << solution.findContentChildren(g1, s1) << endl << endl;
    
    // Test case 2: Another example
    vector<int> g2 = {1, 2};
    vector<int> s2 = {1, 2, 3};
    cout << "Test 2: g = [1,2], s = [1,2,3]" << endl;
    cout << "Expected: 2, Got: " << solution.findContentChildren(g2, s2) << endl << endl;
    
    // Test case 3: Empty arrays
    vector<int> g3 = {};
    vector<int> s3 = {1, 2, 3};
    cout << "Test 3: g = [], s = [1,2,3]" << endl;
    cout << "Expected: 0, Got: " << solution.findContentChildren(g3, s3) << endl << endl;
    
    return 0;
}
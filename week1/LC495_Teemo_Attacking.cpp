#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    int findPoisonedDuration(vector<int>& t, int d) {
       if(d==0){
        return 0;
       }
       int ans = 0;
       for(int i=0;i+1<t.size();++i){
        ans+= min(t[i+1]-t[i], d);
       }
       return ans+d;
    }
};

int main() {
    Solution solution;
    
    // Test case 1: Example from LeetCode
    vector<int> timeSeries1 = {1, 4};
    int duration1 = 2;
    cout << "Test 1: timeSeries = [1,4], duration = 2" << endl;
    cout << "Expected: 4, Got: " << solution.findPoisonedDuration(timeSeries1, duration1) << endl << endl;
    
    // Test case 2: Another example
    vector<int> timeSeries2 = {1, 2};
    int duration2 = 2;
    cout << "Test 2: timeSeries = [1,2], duration = 2" << endl;
    cout << "Expected: 3, Got: " << solution.findPoisonedDuration(timeSeries2, duration2) << endl << endl;
    
    // Test case 3: Single attack
    vector<int> timeSeries3 = {1};
    int duration3 = 2;
    cout << "Test 3: timeSeries = [1], duration = 2" << endl;
    cout << "Expected: 2, Got: " << solution.findPoisonedDuration(timeSeries3, duration3) << endl << endl;
    
    // Test case 4: Duration is 0
    vector<int> timeSeries4 = {1, 2, 3};
    int duration4 = 0;
    cout << "Test 4: timeSeries = [1,2,3], duration = 0" << endl;
    cout << "Expected: 0, Got: " << solution.findPoisonedDuration(timeSeries4, duration4) << endl << endl;
    
    return 0;
}
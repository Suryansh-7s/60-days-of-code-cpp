#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if(n<=2){
            return 0;
        }
        vector<bool> isPrime(n,true);
        for(long long i=2; i*i<n; i++){
            if(isPrime[i]){
                for(int j=i*i; j<n;j+=i){
                    isPrime[j] = false;
                }
            }
        }
        int count=0;
        for(int i=2; i<n; i++){
            if(isPrime[i]) count++;
        }
        return count;
    }
};

int main() {
    Solution solution;
    
    // Test cases
    int test_cases[] = {10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30, 100};
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    
    cout << "Count Primes - Test Results:" << endl;
    cout << "============================" << endl;
    
    for(int i = 0; i < num_tests; i++) {
        int n = test_cases[i];
        int result = solution.countPrimes(n);
        cout << "n = " << n << " -> " << result << " primes" << endl;
    }
    
    // Interactive testing
    cout << "\nEnter a number to count primes less than it (or -1 to exit): ";
    int n;
    while(cin >> n && n != -1) {
        if(n < 0) {
            cout << "Please enter a non-negative number." << endl;
        } else {
            int result = solution.countPrimes(n);
            cout << "Number of primes less than " << n << " is: " << result << endl;
        }
        cout << "\nEnter a number to count primes less than it (or -1 to exit): ";
    }
    
    return 0;
}
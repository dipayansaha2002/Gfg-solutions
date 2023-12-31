//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool isPossible(int N, int coins[]) {
    int sum = 0;
    for(int i=0; i<N; i++){
        sum += coins[i];
    }
    vector<vector<bool>> dp(N + 1, vector<bool>(sum + 1, false));

    // Base case: It's always possible to achieve a sum of 0
    for (int i = 0; i <= N; ++i) {
        dp[i][0] = true;
    }

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= sum; ++j) {
            // If we don't include the current coin
            dp[i][j] = dp[i - 1][j];

            // If we include the current coin and it doesn't exceed the total sum
            if (j >= coins[i - 1]) {
                dp[i][j] = dp[i][j] || dp[i - 1][j - coins[i - 1]];
            }
        }
    }
    for (int j = 1; j <= sum; ++j) {
        if (j % 20 == 0 || j % 24 == 0 || j == 2024) {
            if (dp[N][j]) {
                return true;
            }
        }
    }

    return false;
   }
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int coins[N];
        for(int i=0 ; i<N ; i++)
            cin>>coins[i];

        Solution ob;
        cout << ob.isPossible(N,coins) << endl;
    }
    return 0;
}
// } Driver Code Ends
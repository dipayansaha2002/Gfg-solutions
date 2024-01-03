//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
    int count[3] = {0};
    int left = 0, right = 0;
    int min_length = INT_MAX;

    while (right < S.length()) {
        count[S[right] - '0']++;
        right++;

        //Check if the current window contains all three characters
        while (count[0] && count[1] && count[2]) {
            min_length = min(min_length, right - left);
            count[S[left] - '0']--;
            left++;
        }
    }
    return (min_length != INT_MAX) ? min_length : -1;
}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends
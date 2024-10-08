//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    bool canPair(vector<int>& nums, int k) {
        // Code here.
        unordered_map<int, int> freq;

        for (int x : nums) {
            freq[(x % k + k) % k]++;
        }

        for (auto it : freq) {
            int remainder = it.first;
            int count = it.second;

            if (remainder == 0) {
                if (count % 2 != 0) {
                    return false;
                }
            } else if (2 * remainder == k) {
                if (count % 2 != 0) {
                    return false;
                }
            } else if (freq[remainder] != freq[k - remainder]) {
                return false;
            }
        }
        return true;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends
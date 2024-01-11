//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string S, int k) {
        
        string ans="";
        for(char ch:S){
            while(ans.size() && ans.back()>ch  && k){
                ans.pop_back();
                k--;
            }
            if(ans.size() || ch!='0'){
                ans.push_back(ch);
            }
        }
        while(ans.size() and k){
            ans.pop_back();
            k--;
            
        }
        if(ans==""){
            return "0";
        }
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends
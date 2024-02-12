//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public: 
    const int MOD = 1000000007;

 long long sequence(int n){
        // code here
        long long ans = 1,temp=2,mod=1e9+7;
        int i = 2;
        while(i<=n){
            int j = i;
            long long temp2 = 1;
            while(j--){
                temp2*=temp;
                temp2%=mod;
                temp++;
            }
            ans+=temp2;
            ans%=mod;
            i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends
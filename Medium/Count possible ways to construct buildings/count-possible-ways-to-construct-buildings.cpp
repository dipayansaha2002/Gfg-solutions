//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
	int TotalWays(int N)
	{
	    // Code here
	    int mod = 1000000007;
        long a = 1, b = 2, c = 2;
        
        for (int i = 2; i <= N; i++) {
            c = (a + b) % mod;
            a = b;
            b = c;
        }
        
        return (c * c) % mod;
        
	}
};




//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[], int N) {
        // code here
        unordered_map<int, int> mp;
        int ans = 0;
        //Count the frequency of each element
        for (int i = 0; i < N; ++i)
            mp[arr[i]]++;
        //Find the element with frequency equal to 1
        for (const auto& pair : mp) {
            if (pair.second == 1) {
                ans = pair.first;
                break; //Stop once we find an element with frequency 1
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
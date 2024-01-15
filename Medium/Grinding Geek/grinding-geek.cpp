//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int max_courses(int n, int total, vector<int> &cost)
    {
        //Code Here
        vector<int> curr(total+1,0);
         for(int i=n-1 ; i>=0 ; i--)
        {
            vector<int>next(total+1,0);
            for(int j=0 ; j<=total ; j++)
            {
                int include=0;
                if(cost[i]<=j)
                {
                    include = 1+curr[j - cost[i] + floor(0.9*cost[i])];
                }
                int exclude = curr[j];
                next[j]=max(include,exclude);
            }
            curr=next;
        }
        return curr[total];
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        Solution ob;
        cout<<ob.max_courses(n,k,arr)<<endl;
    }
}
// } Driver Code Ends
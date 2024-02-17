//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    bool isMaxHeap(int arr[], int n)
    {
        // Your code goes here
        int i=0;
        while(i<n){
            int x=2*i+1;
            if(x<n && arr[i]<arr[x]){
                return false;
            }
            x=2*i+2;
            if(x<n && arr[i]<arr[x]){
                return false;
            }
            i++;
        }
        return true;
        
    }
};


//{ Driver Code Starts.
int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin >> n;
       int a[4*n]={0};
       for(int i =0;i<n;i++){
           cin >> a[i];
       }
       Solution ob;
       cout<<ob.isMaxHeap(a, n)<<endl;
        
    }
    return 0;
}

// } Driver Code Ends
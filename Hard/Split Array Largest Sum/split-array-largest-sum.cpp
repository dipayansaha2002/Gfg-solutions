//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    static int splitArray(int arr[], int N, int K) {
        int sum = 0, maxNum = 0;

        for (int i = 0; i < N; i++) {
            if (arr[i] > maxNum) maxNum = arr[i];
            sum += arr[i];
        }

        while (maxNum <= sum) {
            int mid = (maxNum + sum) / 2;
            int num = solve(arr, N, mid);

            if (num > K)
                maxNum = mid + 1;
            else
                sum = mid - 1;
        }

        return maxNum;
    }

    static int solve(int arr[], int N, int midSum) {
        int count = 1, currentSum = 0;

        for (int i = 0; i < N; i++) {
            if (currentSum + arr[i] <= midSum)
                currentSum += arr[i];
            else {
                count++;
                currentSum = arr[i];
            }
        }

        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
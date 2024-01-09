//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    vector <int> search(string pat, string txt){
        vector<int> ans;
        size_t found = txt.find(pat);
        if(found==string::npos)
        {
            return {-1};
        }
        while(found!=string::npos)
        {
            ans.push_back(found+1);
            found = txt.find(pat, found+1);
        }
        
        return ans;
    }
     
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
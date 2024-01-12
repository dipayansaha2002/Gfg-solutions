//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

class StackQueue{
private:
    stack<int> s1;
    stack<int> s2;
public:
    void push(int B);
    int pop();

};
int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        StackQueue *sq = new StackQueue();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }


}

// } Driver Code Ends

/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */

// Function to push an element in queue by using 2 stacks.
void StackQueue::push(int x)
{
    // Simply push the element into stack s1
    s1.push(x);
}

// Function to pop an element from queue by using 2 stacks.
int StackQueue::pop()
{
    // If both stacks are empty, return -1
    if (s1.empty() && s2.empty()) {
        return -1;
    }

    // If s2 is empty, transfer elements from s1 to s2
    if (s2.empty()) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }

    // Pop the front element from s2
    int frontElement = s2.top();
    s2.pop();

    return frontElement;
}


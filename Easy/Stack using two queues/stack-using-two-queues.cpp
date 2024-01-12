//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";

        }
        }
        cout<<endl;
    }
}

// } Driver Code Ends


/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */
void QueueStack::push(int x)
{
    // Enqueue the new element into an empty queue (q2)
    q2.push(x);

    // Enqueue all elements from the original queue (q1) into q2
    while (!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }

    // Swap the names of q1 and q2
    swap(q1, q2);
}

// Function to pop an element from the stack using two queues.
int QueueStack::pop()
{
    // If q1 is empty, the stack is empty
    if (q1.empty())
        return -1;

    // Pop the top element from q1
    int topElement = q1.front();
    q1.pop();

    return topElement;
}

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}




// } Driver Code Ends
//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/
class Solution
{
    public:
    Node* insertionSort(Node* head_ref) {
        if (head_ref == nullptr || head_ref->next == nullptr)
            return head_ref;

        Node* t = head_ref;
        Node* cur = head_ref->next;
        while (cur != nullptr) {
            while (cur != t) {
                if (t->data > cur->data) {
                    int x = t->data;
                    t->data = cur->data;
                    cur->data = x;
                }
                t = t->next;
            }
            t = head_ref;
            cur = cur->next;
        }
        return t;
    }
    
};


//{ Driver Code Starts.
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < n; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Solution ob;

		head = ob.insertionSort(head);
		printList(head);

		cout << "\n";



	}
	return 0;
}
// } Driver Code Ends
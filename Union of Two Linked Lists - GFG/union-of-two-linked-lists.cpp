//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};


// } Driver Code Ends
/*
// structure of the node is as follows

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

*/
class Solution
{
    public:
    void copyToSet(set<int>&st, struct Node* head){
        while(head != NULL){
            st.insert(head->data);
            head = head->next;
        }
    }
    void createList(struct Node* &head, struct Node* &tail, int val){
        struct Node* temp = new Node(val);
        if(head == NULL){
            head = temp;
            tail = temp;
            return;
        }
        tail->next = temp;
        tail = temp;
    }
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        // code here
        set<int>st;
        copyToSet(st, head1);
        copyToSet(st, head2);
        struct Node* head = NULL;
        struct Node* tail = NULL;
        for(auto it : st){
            createList(head, tail, it);
        }
        return head;
    }
};


//{ Driver Code Starts.

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution obj;
        Node* head = obj.makeUnion(first,second);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends
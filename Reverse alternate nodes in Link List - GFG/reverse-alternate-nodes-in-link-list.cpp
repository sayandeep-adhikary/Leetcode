//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
class Solution
{
    public:
    void rearrange(struct Node *odd)
    {
        //add code here
        Node *a = odd;
        Node * alt2 = NULL,*fir,*sec,*alt1 = NULL;
        int i = 0;
        a = odd;
        while(a){
            Node * b = a->next;
            if(i%2 !=0){
                if(alt2 == NULL){
                    alt2 = a;
                    sec = a;
                    a->next = NULL;
                }
                else{
                    sec->next = a;
                    sec = sec->next;
                    a->next = NULL;
                }
            }
            else{
                if(alt1 == NULL){
                    alt1 = a;
                    fir = a;
                    a->next = NULL;
                }
                else{
                    fir->next = a;
                    fir = fir->next;
                    a->next = NULL;
                }
            }
            a = b;
            ++i;
        }
        Node * prev=NULL,*curr = alt2,*nex;
        while(curr){
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        fir->next = prev;
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends
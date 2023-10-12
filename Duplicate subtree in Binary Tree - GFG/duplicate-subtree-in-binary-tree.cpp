//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *left;
	struct Node *right;

	Node(char x) {
		data = x;
		left = NULL;
		right = NULL;
	}
};

struct Node* buildTree(string str)
{
	// Corner Case
	if (str.length() == 0 || str[0] == 'N')
		return NULL;

	// Creating vector of strings from input
	// string after spliting by space
	vector<string> ip;

	istringstream iss(str);
	for (string str; iss >> str; )
		ip.push_back(str);

	// Create the root of the tree
	Node *root = new Node(stoi(ip[0]));

	// Push the root to the queue
	queue<Node*> queue;
	queue.push(root);

	// Starting from the second element
	int i = 1;
	while (!queue.empty() && i < ip.size()) {

		// Get and remove the front of the queue
		Node* currNode = queue.front();
		queue.pop();

		// Get the current node's value from the string
		string currVal = ip[i];

		// If the left child is not null
		if (currVal != "N") {

			// Create the left child for the current Node
			currNode->left = new Node(stoi(currVal));

			// Push it to the queue
			queue.push(currNode->left);
		}

		// For the right child
		i++;
		if (i >= ip.size())
			break;
		currVal = ip[i];

		// If the right child is not null
		if (currVal != "N") {

			// Create the right child for the current node
			currNode->right = new Node(stoi(currVal));

			// Push it to the queue
			queue.push(currNode->right);
		}
		i++;
	}

	return root;
}


// } Driver Code Ends
/*The structure of the Binary Tree Node  is
struct Node
{
  char data;
  struct Node* left;
  struct Node* right;
};*/

class Solution {
  public:
     map<vector<int>,int> mp;
     void order(Node* root)
     {
         vector<int> v;
         queue<Node*> qq;
         qq.push(root);
         while(!qq.empty())
         {
             Node* root=qq.front();
             v.push_back(root->data);
             qq.pop();
             if(root->left){
                 qq.push(root->left); v.push_back(root->left->data);
             }
             if(root->right){
                 qq.push(root->right); v.push_back(root->right->data);
             }
         }
         if(v.size()>=2) mp[v]++;
     }
     
     void traversal (Node* node)
     {
         queue<Node*> q;
         q.push(node);
         while(!q.empty())
         {
             Node * root=q.front();
             q.pop();
             if(root->left) {q.push(root->left); order(root->left); }
             if(root->right) {q.push(root->right); order(root->right); }
         }
     }
    
    int dupSub(Node *root) {
        if(!root) return 0;
         traversal(root);
         for(auto it: mp)
         {
             if(it.second>1) return 1;
         }
         return 0;
    }
};

//{ Driver Code Starts.

int main()
{
	
	int t;
	cin >> t;
	//cout << t << "\n";
	while (t--)
	{
		string treeString;
		getline(cin >> ws, treeString);
		struct Node* root = buildTree(treeString);
		Solution ob;
		cout << ob.dupSub(root) << "\n";
	}
	return 0;
}
// } Driver Code Ends
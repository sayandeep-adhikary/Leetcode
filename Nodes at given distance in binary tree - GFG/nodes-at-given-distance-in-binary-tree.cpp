//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


// } Driver Code Ends
/* A binary Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};
*/

class Solution {
public:

    // @func mapParent
    // This function maps `node` to its `parent` using map `parent`
    // and finds target node `targetNode`
    // This is a DFS function
    void mapParent(Node* node, Node* parentNode, map<Node*, Node*>&parent, int target, Node* &targetNode){
        if(node == NULL)
            return;
        
        // Assign `parentNode` as parent of `node`     
        parent[node] = parentNode;
        
        // Get the targetNode
        if(!targetNode && node->data == target)
            targetNode = node;
        
        mapParent(node->left, node, parent, target, targetNode);
        mapParent(node->right, node, parent, target, targetNode);
    }
    
    vector<int> KDistanceNodes(Node* root, int target , int k){
        vector<int> ans;

        // @param parent
        // Mapping between node and its parent node
        map<Node*, Node*> parent;

        // @param targetNode
        // Node with target value
        Node *targetNode = NULL;
        mapParent(root, NULL, parent, target, targetNode);

        // @param q
        // Queue stores the node and its distance from target node `t`
        // Used in BFS
        queue<pair<Node*,int>> q;
        q.push({targetNode,0});
        
        // @param vis
        // Keeps track of visited nodes while BFS
        map<Node*,bool> vis;
        vis[targetNode] = true;

        // Modified BFS (Breadth-First search)
        // 
        // Generally in BFS, we donot maintain visited nodes
        // but, in this case we are also travelling upwards towards the parent node
        // and simultaneously visiting child nodes
        
        while(!q.empty()){
            int size = q.size();
            while(size--){
                int dist;   // Distace from targetNode
                Node* node; // Current node
                
                tie(node, dist) = q.front();
                q.pop();
                
                if(dist == k){
                    ans.push_back(node->data);
                }else if(dist < k){
                    if(node->left && !vis[node->left]){
                        q.push({node->left, dist+1});
                        vis[node->left] = true;
                    }
                    if(node->right && !vis[node->right]){
                        q.push({node->right, dist+1});
                        vis[node->right] = true;
                    }
                    if(parent[node] && !vis[parent[node]]){
                        q.push({parent[node], dist+1});
                        vis[parent[node]] = true;
                    }
                }
            }
        }
        
        // Question asks to return answer in sorted order
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    getchar();
    
    Solution x = Solution();
    
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* head = buildTree(s);
        
        int target, k;
        cin>> target >> k;
        getchar();
        
        vector <int> res = x.KDistanceNodes(head, target, k);
        
        for( int i=0; i<res.size(); i++ )
            cout<< res[i] << " ";
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends
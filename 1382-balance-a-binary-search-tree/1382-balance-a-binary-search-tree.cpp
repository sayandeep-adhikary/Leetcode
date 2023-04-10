/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private: 
    void inorder(TreeNode* root, vector<int>&v){
        if(root == NULL) return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
    TreeNode* createTree(int i, int j, vector<int>&v){
        if(i > j) return NULL;
        int mid = i + (j - i)/2;
        TreeNode* root = new TreeNode(v[mid]);
        TreeNode* left = createTree(i, mid-1, v);
        TreeNode* right = createTree(mid+1, j, v);
        root->left = left;
        root->right = right;
        return root;
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>v;
        inorder(root, v);
        int i=0;
        int j = v.size() - 1;
        return createTree(i, j, v);
    }
};
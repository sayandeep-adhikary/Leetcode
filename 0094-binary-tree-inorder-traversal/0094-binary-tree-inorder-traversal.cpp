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
        if(root == NULL){
            return;
        }
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        // vector<int>v;
        // inorder(root, v);
        // return v;
        //****************************************
        //Morris Traversal
        vector<int>v;
        TreeNode* curr = root;
        while(curr != NULL){
            if(curr->left == NULL){
                v.push_back(curr->val);
                curr = curr->right;
            }
            else{
                TreeNode* predecessor = curr->left;
                while(predecessor->right != NULL and predecessor->right != curr){
                    predecessor = predecessor->right;
                }
                if(predecessor->right == NULL){
                    predecessor->right = curr;
                    curr = curr->left;
                }
                else{
                    predecessor->right = NULL;
                    v.push_back(curr->val);
                    curr = curr->right;
                }
            }
        }
        return v;
    }
};
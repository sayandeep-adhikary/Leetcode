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
    bool solve(TreeNode* left, TreeNode* right){
        if(left == NULL and right == NULL) return true;
        else if(left == NULL or right == NULL) return false;
        else if(left->val != right->val) return false;
        return solve(left->left, right->right) and solve(left->right, right->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return solve(root->left, root->right);
    }
};
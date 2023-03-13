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
    bool solve(TreeNode* leftSubtree, TreeNode* rightSubtree){
        if(leftSubtree == NULL and rightSubtree == NULL) return true;
        else if(leftSubtree == NULL or rightSubtree == NULL) return false;
        else if(leftSubtree->val != rightSubtree->val) return false;
        return solve(leftSubtree->left, rightSubtree->right) and solve(leftSubtree->right, rightSubtree->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return solve(root->left, root->right);
    }
};
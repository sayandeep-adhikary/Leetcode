/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //Iterative Approach
        // while(root != NULL){
        //     if(root->val > p->val and root->val > q->val){
        //         root = root->left;
        //     }
        //     if(root->val < p->val and root->val < q->val){
        //         root = root->right;
        //     }
        //     else return root;
        // }
        //******************************************************
        //Recursive Approach
        if(root == NULL) return NULL;
        if(root->val > p->val and root->val > q->val){
            return lowestCommonAncestor(root->left, p, q);
        }
        if(root->val < p->val and root->val < q->val){
            return lowestCommonAncestor(root->right, p, q);
        }
        return root;
    }
};
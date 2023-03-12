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
    TreeNode* solve(int max, vector<int>&preorder, int &i){
        if(i == preorder.size()){
            return NULL;
        }
        if(preorder[i] > max){
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[i++]);
        root->left = solve(root->val, preorder, i);
        root->right = solve(max, preorder, i);
        return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        return solve(INT_MAX, preorder, i);
    }
};
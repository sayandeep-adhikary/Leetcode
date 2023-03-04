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
    void inorder(vector<int>&v, TreeNode* root){
        if(root == NULL) return;
        inorder(v, root->left);
        v.push_back(root->val);
        inorder(v, root->right);
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v1;
        vector<int>v2;
        inorder(v1, root1);
        inorder(v2, root2);
        if(root1 == NULL) return v2;
        if(root2 == NULL) return v1;
        for(auto it : v2) v1.push_back(it);
        sort(v1.begin(), v1.end());
        return v1;
    }
};
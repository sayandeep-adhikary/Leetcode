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
    void changeVal(TreeNode* root, map<int, int>&mp){
        if(root == NULL){
            return;
        }
        changeVal(root->left, mp);
        root->val = mp[root->val];
        changeVal(root->right, mp);
    }
public:
    TreeNode* bstToGst(TreeNode* root) {
        vector<int>v;
        inorder(root, v);
        map<int, int>mp;
        for(int i=0; i<v.size(); i++){
            mp[v[i]] = accumulate(v.begin()+i, v.end(), 0);
        }
        changeVal(root, mp);
        return root;
    }
};
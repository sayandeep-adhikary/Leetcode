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
    bool findTarget(TreeNode* root, int k) {
        vector<int>v;
        inorder(root, v);
        if(v.size() == 1) return false;
        int i = 0;
        int j = v.size()-1;
        while(i<j){
            if(v[i] + v[j] == k){
                return true;
            }
            else if(v[i] + v[j] < k){
                i++;
            }
            else j--;
        }
        return false;
    }
};
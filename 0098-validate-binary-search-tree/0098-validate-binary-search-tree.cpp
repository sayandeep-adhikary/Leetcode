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
    //2nd approach
    bool isBST(TreeNode* root, long long min, long long max){
        if(root == NULL) return true;
        if(root->val > min and root->val < max){
            bool left = isBST(root->left, min, root->val);
            bool right = isBST(root->right, root->val, max);
            return left and right;
        }
        else return false;
    }
public:
    bool isValidBST(TreeNode* root) {
        // vector<int>v;
        // inorder(root, v);
        // for(int i=1; i<v.size(); i++){
        //     if(v[i]<=v[i-1]) return false;
        // }
        // return true;
        return isBST(root, LONG_MIN, LONG_MAX);
    }
};
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
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size() == 0) return NULL;
        int index = max_element(nums.begin(), nums.end()) - nums.begin();
        TreeNode* root = new TreeNode(nums[index]);
        vector<int>leftArr;
        vector<int>rightArr;
        for(int i=0; i<index; i++) leftArr.push_back(nums[i]);
        for(int i=index+1; i<nums.size(); i++) rightArr.push_back(nums[i]);
        TreeNode* left = constructMaximumBinaryTree(leftArr);
        TreeNode* right = constructMaximumBinaryTree(rightArr);
        root->left = left;
        root->right = right;
        return root;
    }
};
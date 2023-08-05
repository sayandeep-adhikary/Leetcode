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
    vector<TreeNode*> generate(vector<vector<vector<TreeNode*>>> &memo, int s, int e) {
        if(s > e) {
            return {nullptr};
        }

        if(memo[s][e].empty()) {
            for(int i=s; i<=e; ++i) {
                for(auto left_subtree : generate(memo, s, i-1)) {
                    for(auto right_subtree : generate(memo, i+1, e)) {
                        memo[s][e].push_back(new TreeNode(i, left_subtree, right_subtree));
                    }
                }
            }
        }
        return memo[s][e];
    }
public:
    vector<TreeNode*> generateTrees(int n) {
        vector<vector<vector<TreeNode*>>> memo(n+1, vector<vector<TreeNode*>>(n+1));
        return generate(memo, 1, n);
    }
};
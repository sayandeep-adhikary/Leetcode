class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
        for(auto it : nums){
            bool flag = true;
            for(auto &a : ans){
                if(find(a.begin(), a.end(), it) == a.end()){
                    a.push_back(it);
                    flag = false;
                    break;
                }
            }
            if(flag) ans.push_back({it});
        }
        return ans;
    }
};
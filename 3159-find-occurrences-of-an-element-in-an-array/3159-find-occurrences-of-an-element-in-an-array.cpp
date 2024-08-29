class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        unordered_map<int, int>mp;
        vector<int>ans;
        int j=1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == x){
                mp[j++] = i;
            }
        }
        for(auto it: queries){
            if(mp.find(it) != mp.end()) ans.push_back(mp[it]);
            else ans.push_back(-1);
        }
        return ans;
    }
};
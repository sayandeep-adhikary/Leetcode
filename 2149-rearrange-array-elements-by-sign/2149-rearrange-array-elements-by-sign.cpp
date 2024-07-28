class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        vector<int>ans;
        for(auto it : nums){
            if(it < 0) neg.push_back(it);
            else pos.push_back(it);
        }
        int a=0, b=0;
        for(int i=0; i<nums.size(); i++){
            if(i&1) ans.push_back(neg[a++]);
            else ans.push_back(pos[b++]);
        }
        return ans;
    }
};
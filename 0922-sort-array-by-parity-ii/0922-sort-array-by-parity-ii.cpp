class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>odd, even, ans;
        for(auto it : nums){
            if(it&1) odd.push_back(it);
            else even.push_back(it);
        }
        int i=0;
        int j=0;
        while(i<even.size() and j<odd.size()){
            ans.push_back(even[i++]);
            ans.push_back(odd[j++]);
        }
        while(i<even.size()) ans.push_back(even[i++]);
        while(j<odd.size()) ans.push_back(odd[j++]);
        return ans;
    }
};
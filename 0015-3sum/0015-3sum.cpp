class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // set<int>st;
        // set<vector<int>>ansSt;
        // for(int i=0; i<nums.size(); i++){
        //     for(int j=i+1; j<nums.size(); j++){
        //         int k = - (nums[i] + nums[j]);
        //         if(st.find(k) != st.end()){
        //             vector<int>temp = {nums[i], nums[j], k};
        //             sort(temp.begin(), temp.end());
        //             ansSt.insert(temp);
        //         }
        //         st.insert(nums[j]);
        //     }
        //     st.clear();
        // }
        // vector<vector<int>>ans(ansSt.begin(), ansSt.end());
        // return ans;
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(i > 0 and nums[i] == nums[i-1]) continue;
            int j = i+1;
            int k = nums.size() - 1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum > 0){
                    k--;
                }
                else if(sum < 0){
                    j++;
                }
                else{
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(j < k and nums[j] == nums[j-1]) j++;
                    while(j < k and nums[k] == nums[k+1]) k--;
                }
            }
        }
        return ans;
    }
};
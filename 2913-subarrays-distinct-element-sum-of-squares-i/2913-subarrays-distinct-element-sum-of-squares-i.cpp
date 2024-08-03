class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i; j<nums.size(); j++){
                unordered_set<int>st;
                for(int k=i; k<=j; k++){
                    // cout << nums[k] << " ";
                    st.insert(nums[k]);
                }
                // cout<<endl;
                int d = st.size();
                ans += (d * d);
            }
        }
        return ans;
    }
};
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int ans = 0;
        int maxFreq = 0;
        map<int, int>mp;
        for(auto it : nums) mp[it]++;
        for(auto it : mp){
            maxFreq = max(maxFreq, it.second);
        }
        for(auto it : mp){
            if(it.second == maxFreq) ans+=it.second;
        }
        return ans;
    }
};
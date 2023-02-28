class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 1) return 1;
        vector<int>v;
        map<int, int>mp;
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            if(mp[nums[i]] < 2){
                v.push_back(nums[i]);
            }
            mp[nums[i]]++;
            if(i==j) break;
            if(mp[nums[j]] < 2){
                v.push_back(nums[j]);
            }
            mp[nums[j]]++;
            i++;
            j--;
        }
        sort(v.begin(), v.end());
        for(int i=0; i<v.size(); i++){
            nums[i] = v[i];
        }
        return v.size();
    }
};
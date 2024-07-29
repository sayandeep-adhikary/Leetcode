class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // map<int, int>mp;
        // vector<int>ans;
        // for(auto it : nums){
        //     mp[it]++;
        //     if(mp[it] == (int)(nums.size() / 3) + 1) ans.push_back(it);
        //     if(ans.size() == 2) break;
        // }
        // return ans;
        
        int cnt1 = 0, cnt2 = 0, el1 = INT_MIN, el2 = INT_MIN;
        vector<int>result;
        for(auto it: nums){
            if(cnt1 == 0 and it != el2){
                cnt1 = 1;
                el1 = it;
            }
            else if(cnt2 == 0 and it != el1){
                cnt2 = 1;
                el2 = it;
            }
            else if(el1 == it) cnt1++;
            else if(el2 == it) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0, cnt2 = 0;
        int mini = (int)(nums.size()/3);
        for(auto it : nums){
            if(it == el1) cnt1++;
            else if(it == el2) cnt2++;
        }
        // if(el1 < mini) return {el2};
        // else if(el2 < mini) return {el1};
        // else return {el1, el2};
        if (cnt1 > mini) {
            result.push_back(el1);
        }
        if (cnt2 > mini) {
            result.push_back(el2);
        }
        return result;
    }
};
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string, int>mp;
        for(auto it : arr){
            mp[it]++;
        }
        for(auto it : arr){
            if(mp[it] == 1) k--;
            if(k == 0) return it;
        }
        if(k) return "";
        return "";
    }
};
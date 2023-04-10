class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans;
        vector<int>temp;
        unordered_map<int, int>mp;
        for(auto it : arr1) mp[it]++;
        for(auto it : arr1){
            if(find(arr2.begin(), arr2.end(), it) == arr2.end()){
                temp.push_back(it);
            }
        }
        sort(temp.begin(), temp.end());
        for(auto it : arr2){
            int freq = mp[it];
            while(freq--){
                ans.push_back(it);
            }
        }
        for(auto it : temp){
            ans.push_back(it);
        }
        return ans;
    }
};
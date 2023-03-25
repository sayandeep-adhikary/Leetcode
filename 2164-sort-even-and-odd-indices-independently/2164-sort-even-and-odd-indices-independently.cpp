class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        vector<int>odd;
        vector<int>even;
        vector<int>ans;
        for(int i=0; i<n; i++){
            if(i&1) odd.push_back(nums[i]);
            else even.push_back(nums[i]);
        }
        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(), even.end());
        int j=0;
        int k=0;
        for(int i=0; i<min(odd.size(), even.size()); i++){
            ans.push_back(even[j++]);
            ans.push_back(odd[k++]);
        }
        while(j<even.size()){
            ans.push_back(even[j++]);
        }
        while(k<odd.size()){
            ans.push_back(odd[k++]);
        }
        return ans;
    }
};
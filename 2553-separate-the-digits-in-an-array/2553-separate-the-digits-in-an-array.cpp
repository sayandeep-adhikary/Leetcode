class Solution {
private:
    void getDigit(int n, vector<int>&ans){
        string s = to_string(n);
        for(auto it : s){
            ans.push_back(it - '0');
        }
    }
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(auto it : nums){
            getDigit(it, ans);
        }
        return ans;
    }
};
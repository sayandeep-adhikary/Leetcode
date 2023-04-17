class Solution {
    int getVal(string s){
        bool flag = true;
        for(auto it : s) if(!(isdigit(it))) flag = false;
        return flag ? stoi(s) : s.length();
    }
public:
    int maximumValue(vector<string>& strs) {
        int maxi = INT_MIN;
        for(auto it : strs){
            maxi = max(maxi, getVal(it));
        }
        return maxi;
    }
};
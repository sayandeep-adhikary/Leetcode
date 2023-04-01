class Solution {
public:
    int maxSatisfaction(vector<int>& s) {
        sort(s.begin(), s.end(), greater<int>());
        int presum = 0;
        int result = 0;
        for(auto it: s){
            presum += it;
            if(presum < 0) break;
            result += presum;
        }
        return result;
    }
};
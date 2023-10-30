class Solution {
private:
    int getBits(int n){
        int count = 0;
        while (n){
            if(n & 1)count++;
            n >>= 1;
        }
    return count;
    }
public:
    static bool cmp(pair<int, int>&a, pair<int, int>&b){
        if(a.second == b.second) return a.first < b.first;
        else return a.second < b.second;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int, int>>v;
        vector<int>ans;
        for(auto it : arr){
            int cnt = getBits(it);
            v.push_back({it, cnt});
        }
        sort(v.begin(), v.end(), cmp);
        for(auto it : v) ans.push_back(it.first);
        return ans;
    }
};
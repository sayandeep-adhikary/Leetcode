class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b){
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& b, int t) {
        sort(b.begin(), b.end(), cmp);
        // for(auto it : b) cout<<it[0] << " " << it[1]<<endl;
        int ans = 0;
        for(auto it : b){
            if(it[0] > t){
                ans += t * it[1];
            }
            else{
                ans += it[0]*it[1];
            }
            t -= it[0];
            if(t <= 0) break;
        }
        return ans;
    }
};
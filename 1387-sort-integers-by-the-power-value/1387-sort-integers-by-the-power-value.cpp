class Solution {
private:
    int getPower(int i, vector<int>&dp){
        int cnt = 0;
        int j = i;
        while(i != 1){
            if((i <= 1000) and (dp[i] != -1)){
                return cnt + dp[i];
            }
            cnt++;
            if(i&1){
                i = (3*i) + 1;
            }
            else{
                i = i / 2;
            }
        }
        dp[j] = cnt;
        return cnt;
    }
public:
    static bool cmp(pair<int, int>&a, pair<int, int>&b){
        if(a.second == b.second) return a < b;
        else return a.second < b.second;
    }
    int getKth(int lo, int hi, int k) {
        vector<int>dp(1001, -1);
        vector<pair<int, int>>v;
        for(int i=lo; i<=hi; i++){
            int power = getPower(i, dp);
            v.push_back({i, power});
        }
        sort(v.begin(), v.end(), cmp);
        // cout<<"Dp is : ";
        // for(auto it : dp) cout<<it<<" ";
        // cout<<endl;
        // for(auto it : v){
        //     cout<<it.first<<"->"<<it.second<<endl;
        // }
        return v[k-1].first;
    }
};
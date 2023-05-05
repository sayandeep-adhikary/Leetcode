class Solution {
private:
    int getSum(int n){
        int ans = 0;
        while(n){
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }
public:
    int countBalls(int l, int h) {
        map<int, int>mp;
        for(int i=l; i<=h; i++){
            int n = getSum(i);
            // if(n >= l and n <= h){
                mp[n]++;
            // }
        }
        int ans = INT_MIN;
        for(auto it : mp){
            ans = max(ans, it.second);
        }
        return ans;
    }
};
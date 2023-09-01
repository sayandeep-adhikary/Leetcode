class Solution {
private:
    int bitCount(int n){
        int ans = 0;
        while(n){
            if(n&1) ans++;
            n = n >> 1;
        }
        return ans;
    }
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0; i<=n; i++){
            ans.push_back(bitCount(i));
        }
        return ans;
    }
};
class Solution {
public:
    int getLucky(string s, int k) {
        string temp = "";
        long long ans = 0;
        for(auto it : s) temp += to_string(it - 'a' + 1);
        while(k--){
            ans = 0;
            for(int i=0; i<temp.size(); i++){
                ans += temp[i] - '0';
            }
            temp = to_string(ans);
        }
        return ans;
    }
};
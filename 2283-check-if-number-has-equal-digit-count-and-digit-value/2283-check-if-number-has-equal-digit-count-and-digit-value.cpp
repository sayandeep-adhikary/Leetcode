class Solution {
public:
    bool digitCount(string num) {
        map<int, int>mp;
        for(auto it : num){
            mp[int(it-'0')]++;
        }
        for(int i=0; i<num.size(); i++){
            if(mp[i] != int(num[i] - '0')) return false;
        }
        return true;
    }
};
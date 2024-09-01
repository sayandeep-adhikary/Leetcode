class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        while(n--){
            if(s == goal) return true;
            s.push_back(s[0]);
            s.erase(s.begin());
        }
        return false;
    }
};
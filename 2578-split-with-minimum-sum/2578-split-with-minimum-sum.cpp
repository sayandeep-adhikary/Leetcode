class Solution {
public:
    int splitNum(int num) {
        string s = to_string(num);
        sort(s.begin(), s.end());
        string s1, s2;
        for(int i=0; i<s.size(); i++){
            if(i&1){
                s2 += s[i];
            }
            else s1 += s[i];
        }
        return stoi(s1) + stoi(s2);
    }
};
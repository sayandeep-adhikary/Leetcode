class Solution {
private: 
    bool isValid(string s, string p){
        int i=0;
        int j=0;
        if(s.size() < p.size()) return false;
        while(i<s.size() and j<p.size()){
            if(s[i] != p[i]) return false;
            i++;
            j++;
        }
        return true;
    }
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for(auto it : words){
            if(isValid(it, pref)) count++;
        }
        return count;
    }
};
class Solution {
private:
    bool isValid(string &s){
        set<char>st;
        for(auto it : s) st.insert(it);
        return st.size() == s.size();
    }
public:
    int countGoodSubstrings(string s) {
        int count = 0;
        string temp = "";
        if(s.size() < 3) return count;
        temp = "";
        for(int i=0; i<s.size()-2; i++){
            temp.push_back(s[i]);
            temp.push_back(s[i+1]);
            temp.push_back(s[i+2]);
            if(isValid(temp)) count++;
            temp = "";
        }
        return count;
    }
};
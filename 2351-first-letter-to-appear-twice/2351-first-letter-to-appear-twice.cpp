class Solution {
public:
    char repeatedCharacter(string s) {
        set<int>st;
        for(auto it : s){
            if(!st.insert(it).second) return it;
            else st.insert(it);
        }
        return '0';
    }
};
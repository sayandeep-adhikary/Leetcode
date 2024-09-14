class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        set<char>st;
        for(char ch : allowed) st.insert(ch);
        for(auto it : words){
            bool flag = true;
            for(auto a : it){
                if(st.count(a) == 0){
                    flag = false;
                    break;
                }
            }
            if(flag) count++;
        }
        return count;
    }
};
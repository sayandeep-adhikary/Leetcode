class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>ans;
        set<char>st;
        for(auto it : words[0]) st.insert(it);
        // while(!st.empty()){
        //     char ch = *st.begin();
        //     st.erase(st.begin());
        //     cout<<ch<<"-";
        // }
        while(!st.empty()){
            char ch = *st.begin();
            st.erase(st.begin());
            string temp = "";
            int minChar = INT_MAX;
            for(int j=0; j<words.size(); j++){
                int cnt = count(words[j].begin(), words[j].end(), ch);
                minChar = min(minChar, cnt);
            }
            for(int k=0; k<minChar; k++){
                temp += ch;
                ans.push_back(temp);
                temp = "";
            }
        }
        return ans;
    }
};
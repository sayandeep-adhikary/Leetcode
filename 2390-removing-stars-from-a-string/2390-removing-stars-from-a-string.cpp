class Solution {
public:
    string removeStars(string s) {
        string ans = "";
        stack<char>st;
        for(auto it : s){
            if(it == '*'){
                st.pop();
            }
            else{
                st.push(it);
            }
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
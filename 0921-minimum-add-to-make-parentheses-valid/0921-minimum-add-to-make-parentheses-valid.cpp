class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int count = 0;
        for(auto it : s){
            if(it == '('){
                st.push(it);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
                else count++;
            }
        }
        while(!st.empty()){
            count++;
            st.pop();
        }
        return count;
    }
};
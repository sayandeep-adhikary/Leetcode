class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            char ch = s[i];
            //if opening bracket, push in stack
            if((ch=='(') or (ch=='{') or (ch=='[')){
                st.push(ch);
            }
            else{
                // for closing bracket
                if(!(st.empty())){
                    char top = st.top();
                    if((ch==')' and top=='(') or (ch=='}' and top=='{') or (ch==']' and top=='[')){
                        st.pop();
                    }
                    else return false;
                }
                else return false;
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};
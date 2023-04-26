class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        vector<int>ans;
        stack<int>st;
        for(auto it : a){
            if((st.empty()) or (it > 0)){
                st.push(it);
            }
            else{
                while((!st.empty()) and (st.top() > 0) and (st.top() < abs(it))){
                    st.pop();
                }
                if((!st.empty()) and (st.top() == abs(it))){
                    st.pop();
                }
                else{
                    if((st.empty()) or (st.top() < 0)) st.push(it);
                }
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
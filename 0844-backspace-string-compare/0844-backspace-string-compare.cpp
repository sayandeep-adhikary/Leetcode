class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1, s2;
        stack<char>st1, st2;
        for(auto it : s){
            if(it == '#' and !st1.empty()) st1.pop();
            else if(it != '#')st1.push(it);
        }
        for(auto it : t){
            if(it == '#' and !st2.empty()) st2.pop();
            else if(it != '#')st2.push(it);
        }
        while(!st1.empty()){
            s1 += st1.top();
            st1.pop();
        }
        while(!st2.empty()){
            s2 += st2.top();
            st2.pop();
        }
        return s1 == s2;
    }
};
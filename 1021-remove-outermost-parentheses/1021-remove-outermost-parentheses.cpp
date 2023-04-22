class Solution {
private:
    string remove(string a){
        string ans;
        for(int i=1; i<a.size()-1; i++) ans += a[i];
        return ans;
    }
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int opCount = 0;
        int clCount = 0;
        string temp = "";
        for(int i=0; i<s.size(); i++){
            temp += s[i];
            if(s[i] == '(') opCount++;
            else clCount++;
            if(opCount == clCount and opCount != 0){
                // cout<<temp<<endl;
                ans += remove(temp);
                opCount = 0;
                clCount = 0;
                temp = "";
            }
        }
        return ans;
    }
};
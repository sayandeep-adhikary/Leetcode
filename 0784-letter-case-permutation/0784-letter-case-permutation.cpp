class Solution {
public:
    void solve(string ip, string op, vector<string>&ans){
        if(ip.size() == 0){
            ans.push_back(op);
            return;
        }
        if(isdigit(ip[0])){
            op += ip[0];
            ip.erase(ip.begin());
            solve(ip, op, ans);
        }
        else{
            string op1 = op;
            string op2 = op;
            op1 += toupper(ip[0]);
            op2 += tolower(ip[0]);
            ip.erase(ip.begin());
            solve(ip, op1, ans);
            solve(ip, op2, ans);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        string ip = s;
        string op = "";
        solve(ip, op, ans);
        return ans;
    }
};
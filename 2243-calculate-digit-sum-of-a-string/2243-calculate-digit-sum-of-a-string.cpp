class Solution {
public:
    vector<string> divideGroups(string s, int k){
        vector<string>ans;
        string temp = "";
        for(int i=0; i<s.size(); i++){
            temp += s[i];
            if(temp.size() == k){
                ans.push_back(temp);
                temp = "";
            }
        }
        if(temp.size()) ans.push_back(temp);
        return ans;
    }
    string getDigitSum(string s){
        int sum = 0;
        for(auto it : s) sum += it - '0';
        return to_string(sum);
    }
    string digitSum(string s, int k) {
        while(s.size() > k){
            vector<string>v = divideGroups(s, k);
            // for(auto it: v) cout<< it<< " ";
            // cout<<endl;
            s = "";
            for(auto it : v) s += getDigitSum(it);
            // cout<<s << "->";
        }
        return s;
    }
};
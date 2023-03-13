class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        for(auto it : strs){
            cout<<it<<" ";
        }
        cout<<endl;
        string s = "";
        bool flag = true;
        int size = strs[0].size();
        for(int i=0; i<size; i++){
            int ch = strs[0][i];
            for(int j=0; j<strs.size(); j++){
                if(ch != strs[j][i]){
                    flag = false;
                    break;
                }
            }
            if(flag) s += ch;
        }
        return s;
    }
};
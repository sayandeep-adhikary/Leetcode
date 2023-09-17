class Solution {
public:
    string removeTrailingZeros(string num){
        int l = num.size();
        string ans = "";
        bool flag = true;
        for(int i=l-1; i>=0; i--){
            if((num[i] == '0') and (flag == false)) ans = num[i] + ans;
            if(num[i] != '0'){
                ans = num[i] + ans;
                flag = false;
            }
        }
        return ans;
    }
};
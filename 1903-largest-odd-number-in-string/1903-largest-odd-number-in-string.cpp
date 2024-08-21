class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int index = -1;
        for(int i=num.size()-1; i>=0; i--){
            int n = num[i] - '0';
            if(n&1){
                index = i;
                break;
            }
        }
        if(index == -1) return "";
        num.resize(index+1);
        return num;
    }
};
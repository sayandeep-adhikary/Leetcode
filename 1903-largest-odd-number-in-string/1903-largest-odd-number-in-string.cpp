class Solution {
public:
    string largestOddNumber(string num) {
        int index = -1;
        for(int i=num.size()-1; i>=0; i--){
            if((num[i]-'0')&1){
                index = i;
                break;
            }
        }
        return num.substr(0, index+1);
    }
};
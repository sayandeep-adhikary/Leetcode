class Solution {
public:
    string removeTrailingZeros(string num){
        int final;
   
        for(int i=num.size()-1;i>=0;i--){
            if(num[i] != '0'){
                final =i;
                break;
            }
           
        }
         return num.substr(0,final+1);
    }
};
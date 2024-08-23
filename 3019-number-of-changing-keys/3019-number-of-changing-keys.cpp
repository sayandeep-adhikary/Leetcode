class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;
        for(int i=1; i<s.size(); i++){
            char ch1 = s[i];
            char ch2 = s[i-1];
            if(ch1>=97 and ch1 <=122){
                ch1 = ch1 - 32;
            }
            if(ch2>=97 and ch2 <=122){
                ch2 = ch2 - 32;
            }
            count += ch1 != ch2;
        }
        return count;
    }
};
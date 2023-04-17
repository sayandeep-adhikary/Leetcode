class Solution {
public:
    string generateTheString(int n) {
        string s;
        char ch = 'a';
        if(n&1){
            for(int i=0; i<n; i++){
                s += ch;
            }
        }
        else{
            for(int i=0; i<n-1; i++){
                s += ch;
            }
            s += 'b';
        }
        return s;
    }
};
class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        string s1 = s;
        char ch;
        for(int i=0; i<s.size(); i++){
            if(s[i] != '9'){
                ch = s[i];
                break;
            }
        }
        for(int i=0; i<s.size(); i++){
            if(s[i] == ch) s[i] = '9';
        }
        for(int i=0; i<s1.size(); i++){
            if(s1[i] != '0'){
                ch = s1[i];
                break;
            }
        }
        for(int i=0; i<s1.size(); i++){
            if(s1[i] == ch) s1[i] = '0';
        }
        return stoi(s) - stoi(s1);
        return 0;
    }
};
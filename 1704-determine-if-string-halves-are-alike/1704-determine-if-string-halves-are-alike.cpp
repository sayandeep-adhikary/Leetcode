class Solution {
private: 
    bool isVowel(char ch){
        if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'A' or
          ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U') return true;
        else return false;
    }
public:
    bool halvesAreAlike(string s) {
        string s1, s2;
        int count1 = 0, count2 = 0;
        for(int i=0; i<s.size(); i++){
            if(i<(s.size()/2)) s1 += s[i];
            else s2 += s[i];
        }
        for(auto it : s1) if(isVowel(it)) count1++;
        for(auto it : s2) if(isVowel(it)) count2++;
        return count1 == count2;
    }
};
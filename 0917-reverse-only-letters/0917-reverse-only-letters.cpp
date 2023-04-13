class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0, j=s.size()-1;
        while(i<=j){
            if(((s[i]>='A' and s[i]<='Z') or (s[i]>='a' and s[i]<='z')) and 
              ((s[j]>='A' and s[j]<='Z') or (s[j]>='a' and s[j]<='z')))
                    swap(s[i++], s[j--]);
            else if(!(((s[i]>='A' and s[i]<='Z') or (s[i]>='a' and s[i]<='z')))) i++;
            else if(!(((s[j]>='A' and s[j]<='Z') or (s[j]>='a' and s[j]<='z')))) j--;
        }
        return s;
    }
};
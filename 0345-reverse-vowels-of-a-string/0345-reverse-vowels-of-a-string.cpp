class Solution {
public:
    string reverseVowels(string s) {
        int i=0, j=s.size()-1;
        while(i<j){
            while(i<j and tolower(s[i]) != 'a' and tolower(s[i]) != 'e' and tolower(s[i]) != 'i'
                  and tolower(s[i]) != 'o' and tolower(s[i]) != 'u') i++;
            while(i<j and tolower(s[j]) != 'a' and tolower(s[j]) != 'e' and tolower(s[j]) != 'i'
                  and tolower(s[j]) != 'o' and tolower(s[j]) != 'u') j--;
            swap(s[i++], s[j--]);
        }
        return s;
    }
};
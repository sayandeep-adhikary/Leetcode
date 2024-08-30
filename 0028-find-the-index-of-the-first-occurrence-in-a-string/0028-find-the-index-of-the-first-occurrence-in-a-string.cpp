class Solution {
public:
    int strStr(string haystack, string needle) {
        int l = 0;
        int r = 0;
        string temp = "";
        while(r < haystack.size()){
            temp += haystack[r];
            if(temp.size() > needle.size()){
                temp.erase(temp.begin());
                l++;
            }
            if(temp == needle) return l;
            r++;
        }
        return -1;
    }
};
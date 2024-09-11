class Solution {
public:
    int strStr(string haystack, string needle) {
        // size_t index = haystack.find(needle);
        // if (index == string::npos) {
        //     return -1;
        // }
        // return index;
        auto it  = search(haystack.begin(), haystack.end(), needle.begin(), needle.end());
        if(it != haystack.end()) return it - haystack.begin();
        else return -1;
    }
};
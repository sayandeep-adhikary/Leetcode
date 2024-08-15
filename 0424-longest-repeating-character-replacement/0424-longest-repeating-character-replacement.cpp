class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int>mp;
        int left = 0, right = 0, maxLen = 0, maxCount = 0;
        while(right<s.size()){
            mp[s[right]]++;
            maxCount = max(maxCount, mp[s[right]]);
            if ((right - left + 1) - maxCount > k) {
                mp[s[left]]--;
                left++;
            }
            maxLen = max(maxLen, right - left + 1);
            right++;
        }
        return maxLen;
    }
};
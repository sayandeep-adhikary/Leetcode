class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int count = 0;
        int l=0, r=0;
        int one = 0, zero = 0;
        while(r<s.size()){
            if(s[r] == '1') one++;
            else zero++;
            while(one > k and zero > k){
                if(s[l] == '1') one--;
                else zero--;
                l++;
            }
            count += (r-l+1);
            r++;
        }
        return count;
    }
};
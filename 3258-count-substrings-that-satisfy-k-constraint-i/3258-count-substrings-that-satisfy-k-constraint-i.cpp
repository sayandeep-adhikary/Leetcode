class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int count = 0;
        for(int i=0; i<s.size(); i++){
            for(int j=i; j<s.size(); j++){
                int zero = 0;
                int one = 0;
                for(int h=i; h<=j; h++){
                    if(s[h] == '1') one++;
                    else zero++;
                }
                if(one<=k or zero<=k) count++;
            }
        }
        return count;
    }
};
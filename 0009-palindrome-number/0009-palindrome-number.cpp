class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int dup = x;
        long long revN = 0;
        while(dup != 0){
            int digit = dup % 10;
            dup /= 10;
            revN = (revN * 10) + digit;
        }
        if(revN == x) return true;
        else return false;
    }
};
class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0, x = 0;
        for(auto it : s){
            if(it == 'L') x++;
            else x--;
            if(x == 0) count++;
        }
        return count;
    }
};
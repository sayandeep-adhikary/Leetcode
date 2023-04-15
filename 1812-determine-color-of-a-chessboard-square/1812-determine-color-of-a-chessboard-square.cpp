class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int f = coordinates[0] - 'a' + 1;
        int g = coordinates[1] - '0';
        if((f+g)&1) return true;
        else return false;
    }
};
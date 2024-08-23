class Solution {
public:
    int minimumChairs(string s) {
        int count = 0, maxCount = 0;
        for(auto it : s){
            if(it == 'E') count++;
            else count--;
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};
class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int maxCount = 0;
        for(auto it : s){
            if(it == '('){
                count++;
                maxCount = max(maxCount, count);
            }
            else if(it == ')') count--;
        }
        return maxCount;
    }
};
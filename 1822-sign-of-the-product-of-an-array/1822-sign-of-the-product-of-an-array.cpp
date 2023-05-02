class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negCount=0;
        for(auto it : nums){
            if(it==0) return 0;
            if(it<0) negCount++;
        }
        if(negCount&1) return -1;
        else return 1;
    }
};
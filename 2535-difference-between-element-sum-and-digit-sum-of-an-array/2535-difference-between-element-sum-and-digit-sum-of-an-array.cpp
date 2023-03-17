class Solution {
private:
    int sumDigit(int n){
        int i=0;
        while(n != 0){
            i += n%10;
            n /= 10;
        }
        return i;
    }
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1 = accumulate(nums.begin(), nums.end(), 0);
        int sum2 = 0;
        for(auto it : nums){
            sum2 += sumDigit(it);
        }
        return abs(sum1-sum2);
    }
};
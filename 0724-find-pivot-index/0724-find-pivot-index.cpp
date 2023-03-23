class Solution {
private:
    int getLSum(vector<int>& nums, int i){
        int sum = 0;
        for(int k = 0; k < i; k++){
            sum += nums[k];
        }
        return sum;
    }
    int getRSum(vector<int>& nums, int i){
        int sum = 0;
        for(int k = i+1; k<nums.size(); k++){
            sum += nums[k];
        }
        return sum;
    }
public:
    int pivotIndex(vector<int>& nums) {
        // for(int i=0; i<nums.size(); i++){
        //     int lsum = getLSum(nums, i);
        //     int rsum = getRSum(nums, i);
        //     if(lsum == rsum) return i;
        // }
        // return -1;
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int lSum = 0;
        for(int i=0; i<nums.size(); i++){
            lSum += nums[i];
            if(lSum == sum) return i;
            else{
                sum -= nums[i];
            }
        }
        return -1;
    }
};
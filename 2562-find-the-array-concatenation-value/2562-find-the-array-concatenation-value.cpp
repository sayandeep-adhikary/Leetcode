class Solution {
private:
    long long conc(int i, int j){
        int temp = j;
        int digitCount = 0;
        while(temp){
            int digit = temp%10; 
            digitCount++;
            temp /= 10;
        }
        return (j + (pow(10, digitCount)*i));
    }
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans = 0;
        int i=0;
        int j = nums.size()-1;
        while(i<=j){
            if(i == j){
                ans += nums[i];
                break;
            }
            ans += conc(nums[i++], nums[j--]);
        }
        return ans;
    }
};
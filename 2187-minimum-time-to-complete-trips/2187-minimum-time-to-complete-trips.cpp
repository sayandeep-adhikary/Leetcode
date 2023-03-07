class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long left = 0;
        long long right = 1e14;
        long long ans = right;
        while(left<right){
            long long mid = left + (right - left)/2;
            long long count = 0;
            for(auto it : time){
                count += mid/it;
            }
            if(count >= totalTrips){
                ans = min(ans, mid);
                right = mid;
            }
            else left = mid + 1;
        }
        return ans;
    }
};
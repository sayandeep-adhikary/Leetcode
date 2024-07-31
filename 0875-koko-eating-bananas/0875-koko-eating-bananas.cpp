class Solution {
public:
    long long func(vector<int> piles, int h){
        long long ans = 0;
        for(auto it : piles) ans += ceil((double)it/(double)h);
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        while(low<=high){
            int mid = low + (high-low)/2;
            long long timeToEat = func(piles, mid);
            if(timeToEat <= h){
                high = mid-1;
            }
            else low = mid+1;
        }
        return low;
    }
};
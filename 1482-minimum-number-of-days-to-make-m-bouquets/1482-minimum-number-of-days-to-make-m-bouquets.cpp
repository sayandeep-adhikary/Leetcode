class Solution {
public:
    int findBou(vector<int> b, int m, int k){
        int count = 0;
        int ans = 0;
        for(auto it : b){
            if(it <= m) count++;
            else{
                ans += (count / k);
                count = 0;
            }
        }
        ans += (count/k);
        return ans;
    }
    int minDays(vector<int>& b, int m, int k) {
        if ((long long)m * k > b.size()) {
            return -1;
        }
        int low = *min_element(b.begin(), b.end()), high = *max_element(b.begin(), b.end());
        int ans = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            int bou = findBou(b, mid, k);
            if(bou >= m){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};
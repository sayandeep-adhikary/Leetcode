class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        k %= accumulate(chalk.begin(), chalk.end(), 0l);
        vector<long long>v;
        int ans;
        for(auto it : chalk){
            if(v.size() == 0) v.push_back(it);
            else v.push_back(v.back()+it);
        }
        int l = 0, h = chalk.size() - 1;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(v[mid] > k){
                ans = mid;
                h = mid-1;
            }
            else l = mid+1;
        }
        return ans;
    }
};
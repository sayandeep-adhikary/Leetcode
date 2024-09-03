class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        k %= accumulate(chalk.begin(), chalk.end(), 0l);
        for(int i=0; i<chalk.size(); i++){
            if((k-chalk[i])<0) return i;
            else k -= chalk[i];
        }
        return 0;
    }
};
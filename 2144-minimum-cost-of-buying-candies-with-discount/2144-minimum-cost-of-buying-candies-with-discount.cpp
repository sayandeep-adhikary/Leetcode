class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int sum=0;
        int i=cost.size()-1;
        while(i>=1){
            sum+=cost[i]+cost[i-1];
            i-=3;
        }
        if(i==0) sum+=cost[i];
        return sum;
    }
};
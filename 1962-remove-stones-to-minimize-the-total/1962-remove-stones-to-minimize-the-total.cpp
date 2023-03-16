class Solution {
public:
    int minStoneSum(vector<int>& p, int k) {
        priority_queue<int>a;
        for(auto it : p) a.push(it);
        while(k--){
            int num = a.top();
            a.pop();
            num = num&1?(num/2)+1:num/2;
            a.push(num);
        }
        int sum = 0;
        while(!a.empty()){
            sum += a.top();
            a.pop();
        }
        return sum;
    }
};
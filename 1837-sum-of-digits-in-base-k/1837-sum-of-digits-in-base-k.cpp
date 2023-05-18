class Solution {
public:
    int sumBase(int n, int k) {
        int sum = 0, i = 0;
        while(n){
            int r = n % k;
            sum += r;
            n /= k;
        }
        return sum;
    }
};
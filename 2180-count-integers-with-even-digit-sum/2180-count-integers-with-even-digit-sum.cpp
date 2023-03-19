class Solution {
private:
    int digitsum(int i){
        int s = 0;
        while(i != 0){
            s += i%10;
            i = i / 10;
        }
        return s;
    }
public:
    int countEven(int num) {
        int ans = 0;
        for(int i=1; i<=num; i++){
            if(!(digitsum(i)&1)) ans++;
        }
        return ans;
    }
};
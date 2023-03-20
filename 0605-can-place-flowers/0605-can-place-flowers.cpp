class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int s = f.size();
        if(n == 0) return true;
        if((n == 1) and (f[0] == 0) and (s == 1)) return true;
        for(int i=0; i<s; i++){
            if(f[i] == 0){
                if(i == 0){
                    if(f[i+1] != 1) {
                        f[i] = 1;
                        n--;
                    }
                }
                else if(i == s-1){
                    if(f[i-1] != 1){
                        f[i] = 1;
                        n--;
                    }
                }
                else if(f[i-1] != 1 and f[i+1] != 1){
                    f[i] = 1;
                    n--;
                }
            }
            
        }
        return n<=0;
    }
};
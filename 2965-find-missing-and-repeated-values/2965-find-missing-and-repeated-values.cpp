class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int num1, num2;
        vector<int>hash((n*n)+1, 0);
        for(auto a : grid){
            for(auto b: a){
                hash[b]++;
                if(hash[b] > 1) num1 = b;
            }
        }
        for(int i=1; i<=(n*n); i++) if(hash[i] == 0){num2 = i; break;}
        return {num1, num2};
    }
};
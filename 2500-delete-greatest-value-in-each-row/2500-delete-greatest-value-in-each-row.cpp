class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans = 0;
        while(grid[0].size() != 0){
            vector<int>maxi;
            for(int i=0; i<grid.size(); i++){
                vector<int>v;
                int x = -1;
                int max = *max_element(grid[i].begin(), grid[i].end());
                maxi.push_back(max);
                for(auto it : grid[i]){
                    if((it == max) and (x == -1)) x = it;
                    else if((it == max) and (x != -1)) v.push_back(it);
                    else if(it != max) v.push_back(it);
                }
                grid[i] = v;
            }
            ans += *max_element(maxi.begin(), maxi.end());
        }
        return ans;
    }
};
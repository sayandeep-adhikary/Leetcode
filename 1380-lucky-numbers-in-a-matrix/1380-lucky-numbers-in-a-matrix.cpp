class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>min, maxim, ans;
        for(auto it : matrix) min.push_back(*min_element(it.begin(), it.end()));
        for(int i=0; i<matrix[0].size(); i++){
            int maxi = INT_MIN;
            for(int j=0; j<matrix.size(); j++){
                maxi = max(maxi, matrix[j][i]);
            }
            maxim.push_back(maxi);
        }
        // for(auto it : min) cout<<it<<" ";
        // cout<<endl;
        // for(auto it : maxim) cout<<it<<" ";
        // cout<<endl;
        for(auto it : min){
            if(find(maxim.begin(), maxim.end(), it) != maxim.end()){
                ans.push_back(it);
            }
        }
        return ans;
    }
};
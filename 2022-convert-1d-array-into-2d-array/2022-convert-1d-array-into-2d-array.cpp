class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& o, int m, int n) {
        if((double)m * (double)n != o.size()) return {};
        vector<vector<int>>ans;
        int rowEle = 0;
        vector<int>temp;
        for(auto it : o){
            temp.push_back(it);
            rowEle++;
            if(rowEle == n){
                ans.push_back(temp);
                temp.clear();
                rowEle = 0;
            }
        }
        return ans;
    }
};
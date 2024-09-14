class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>xorArr;
        vector<int>ans;
        int xor1 = 0;
        for(int i=0; i<arr.size(); i++){
            xor1 ^= arr[i];
            xorArr.push_back(xor1);
        }
        for(auto it : queries){
            if(it[0] == 0) ans.push_back(xorArr[it[1]]);
            else ans.push_back(xorArr[it[0]-1] ^ xorArr[it[1]]);
        }
        return ans;
    }
};
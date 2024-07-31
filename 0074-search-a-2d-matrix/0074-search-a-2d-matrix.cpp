class Solution {
public:
    bool isPresent(vector<int>v, int n, int target){
        int low = 0, high = n-1;
        while(low <= high){
            int mid = low+(high-low)/2;
            if(v[mid] == target) return true;
            else if(v[mid] < target) low = mid+1;
            else high = mid-1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(auto it : matrix){
            if(it[0] <= target and it[m-1] >= target){
                cout << m << endl;
                return isPresent(it, m, target);
            }
        }
        return false;
    }
};
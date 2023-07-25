class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int num = *max_element(arr.begin(),arr.end());
        for(int i = 0 ; i< arr.size() ; i++){
            if(arr[i] == num) return i;
        }
        return 0;
    }
};
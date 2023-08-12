class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        for(int i=0; i<arr.size(); i++){
            for(int j=i; j<arr.size(); j++){
                if((j-i)% 2 == 0){
                    sum += accumulate(arr.begin()+i, arr.begin()+j+1, 0);
                }
            }
        }
        return sum;
    }
};
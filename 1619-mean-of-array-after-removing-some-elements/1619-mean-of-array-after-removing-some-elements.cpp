class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n = arr.size();
        int x = n / 20;
        double sum = 0;
        double ans;
        sort(arr.begin(), arr.end());
        for(int i=x; i<arr.size()-x; i++) sum += arr[i];
        return sum / (n - (2*x));
    }
};
class Solution {
public:
    int pivotInteger(int n) {
        // vector<int>v1;
        // vector<int>v2;
        // v1.push_back(1);
        // v2.push_back(n);
        // for(int i=1; i<n; i++){
        //     v1.push_back(v1.back()+i+1);
        // }
        // for(int i=1; i<n; i++){
        //     v2.push_back(v2.back()+n-i);
        // }
        // reverse(v2.begin(), v2.end());
        // for(int i=0; i<v1.size(); i++){
        //     if(v1[i] == v2[i]) return i+1;
        // }
        // return -1;
        int sum = n * (n + 1) / 2;
        int x = sqrt(sum);
        return x * x == sum ? x : -1;
    }
};
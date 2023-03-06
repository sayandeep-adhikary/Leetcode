class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = 1;
        vector<int>missing;
        for(int i=1; i<=arr[arr.size()-1]; i++){
            if(find(arr.begin(), arr.end(), i) == arr.end()){
                missing.push_back(i);
            }
        }
        for(auto it : missing) cout<<it<<" ";
        cout<<endl;
        if(missing.size() >=k){
            return missing[k-1];
        }
        else{
            return arr[arr.size()-1] + k - missing.size();
        }
        return 0;
    }
};
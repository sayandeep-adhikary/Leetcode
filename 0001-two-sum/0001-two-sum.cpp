class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Brute Force approach, TC = O(n^2), SC = O(1)
//         for(int i=0; i<nums.size();i++)
//         {
//             for(int j = i+1; j<nums.size();j++)
//             {
//                 if(nums[i]+nums[j]==target )
//                 {
//                     return {i, j};
//                     break;                
//                 }           
//             }
//         }
//         return {-1, -1};
        
        
        //Using unordered map : TC = O(n), SC  = O(n)
        unordered_map<int, int>m;
        for(int i=0; i<nums.size(); i++){
            int x = nums[i];
            int y = target - x;
            if(m.find(y) != m.end()){
                return {i, m[y]};
            }
            m[nums[i]] = i;
        }
        return{-1, -1};
        
        // two pointer approach : TC = O(nlogn), SC = O(n)
        // int n = nums.size();
        // vector<pair<int, int>>v;
        // for(int i=0; i<n; i++){
        //     v.emplace_back(nums[i], i);
        // }
        // sort(v.begin(), v.end());
        // int start = 0;
        // int end = nums.size() - 1;
        // while(start<end){
        //     int sum = v[start].first + v[end].first;
        //     if(sum==target) return{v[start].second, v[end].second};
        //     else if(sum>target) end--;
        //     else start++;
        // }
        // return {-1, -1};
    }
};
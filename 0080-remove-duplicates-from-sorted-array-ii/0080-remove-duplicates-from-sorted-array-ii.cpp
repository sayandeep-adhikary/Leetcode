class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 1) return 1;
        vector<int>v;
        map<int, int>mp;
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            cout<<"In the loop " <<nums[i]<<"->"<<mp[nums[i]]<<endl;
            cout<<"In the loop " <<nums[j]<<"->"<<mp[nums[j]]<<endl;
            if(mp[nums[i]] < 2){
                v.push_back(nums[i]);
            }
            mp[nums[i]]++;
            if(i==j) break;
            if(mp[nums[j]] < 2){
                v.push_back(nums[j]);
            }
            cout<<"In the loop the vector is : ";
            for(auto it : v){
                cout<<it<<" ";
            }cout<<endl;
            mp[nums[j]]++;
            i++;
            j--;
        }
        for(auto it : mp){
            cout<<it.first<<"->"<<it.second<<endl;
        }
        cout<<endl;
        for(auto it : v) cout<<it<<" ";
        cout<<endl;
        sort(v.begin(), v.end());
        for(auto it : v) cout<<it<<" ";
        for(int i=0; i<v.size(); i++){
            nums[i] = v[i];
        }
        cout<<"Ans = "<<v.size();
        return v.size();
    }
};
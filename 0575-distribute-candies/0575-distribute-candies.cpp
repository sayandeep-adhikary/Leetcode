class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int count = 0;
        int n = candyType.size() / 2;
        unordered_map<int, int>mp;
        for(auto it : candyType) mp[it]++;
        for(auto it : mp){
            if(count == n) break;
            count++;
        }
        return count;
    }
};
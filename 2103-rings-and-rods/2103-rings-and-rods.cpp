class Solution {
public:
    int countPoints(string rings) {
        map<char, string>mp;
        for(int i=1; i<rings.size(); i+=2){
            mp[rings[i]] += rings[i-1];
        }
        int count = 0;
        for(auto it : mp){
            if((find(it.second.begin(), it.second.end(), 'R') != it.second.end())
              and (find(it.second.begin(), it.second.end(), 'G') != it.second.end())
              and (find(it.second.begin(), it.second.end(), 'B') != it.second.end())) count++;
        }
        return count;
    }
};
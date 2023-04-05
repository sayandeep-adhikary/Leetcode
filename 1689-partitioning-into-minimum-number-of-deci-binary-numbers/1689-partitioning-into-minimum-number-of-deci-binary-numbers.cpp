class Solution {
public:
    int minPartitions(string n) {
        vector<int>v;
        for(auto it : n){
            v.push_back(it - '0');
        }
        return *max_element(v.begin(), v.end());
    }
};
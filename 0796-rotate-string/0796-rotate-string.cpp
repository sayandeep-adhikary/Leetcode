class Solution {
public:
    bool rotateString(string s, string goal) {
        vector<char>v1;
        vector<char>v2;
        for(auto it : s)v1.push_back(it);
        for(auto it : goal)v2.push_back(it);
        for(int i=0; i<v1.size(); i++){
            if(v1 == v2) return true;
            v1.push_back(v1[0]);
            v1.erase(v1.begin());
        }
        return false;
    }
};
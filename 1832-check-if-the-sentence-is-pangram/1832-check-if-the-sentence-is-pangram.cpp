class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char>s;
        for(auto it : sentence) s.insert(it);
        if(s.size() == 26) return true;
        else return false;
    }
};
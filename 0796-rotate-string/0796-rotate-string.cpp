class Solution {
public:
    string rotateS(int ind, string s){
        reverse(s.begin(), s.begin()+ind+1);
        reverse(s.begin()+ind+1, s.end());
        reverse(s.begin(), s.end());
        return s;
    }
    bool rotateString(string s, string g) {
        if(s.size() != g.size()) return false;
        for(int i=0; i<s.size(); i++){
            string temp = rotateS(i, s);
            cout << temp << endl;
            if(temp == g) return true;
        }
        return false;
    }
};
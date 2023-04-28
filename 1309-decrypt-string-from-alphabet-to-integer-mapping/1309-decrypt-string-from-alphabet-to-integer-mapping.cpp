class Solution {
public:
    string getString(string s){
        s.pop_back();
        string temp;
        temp += stoi(s) - 1 + 'a';
        return temp;
    }
    string freqAlphabets(string s) {
        vector<string>v;
        string temp;
        for(int i=0; i<s.size(); i++){
            if((i+2 < s.size()) and (s[i+2] == '#')){
                temp += s[i];
                temp += s[i+1];
                temp += s[i+2];
                v.push_back(temp);
                temp = "";
                i+=2;
            }
            else{
                temp += s[i];
                v.push_back(temp);
                temp = "";
            }
        }
        temp = "";
        for(auto it : v){
            if(it.size() == 1){
                temp += (stoi(it) - 1 + 'a');
            }
            else{
                temp += getString(it);
            }
        }
        return temp;
    }
};
class Solution {
private:
    bool isValid(string temp, unordered_map<char, int>&mp){
        for(auto it : temp){
            if(mp[it] != 0) return false;
        }
        return true;
    }
public:
    int canBeTypedWords(string text, string brokenLetters) {
        text += " ";
        int count = 0;
        string temp;
        unordered_map<char, int>mp;
        for(auto it : brokenLetters) mp[it]++;
        for(int i=0; i<text.size(); i++){
            if(text[i] != ' '){
                temp += text[i];
            }
            else{
                if(isValid(temp, mp)) count++;
                temp = "";
            }
        }
        return count;
    }
};
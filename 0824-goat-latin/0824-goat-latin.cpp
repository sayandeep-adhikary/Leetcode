class Solution {
private:
    string getWord(string &w, int i){
        w += "ma";
        for(int j=0; j<=i; j++) w += "a";
        // cout<<w<<endl;
        return w;
    }
public:
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word;
        string ans = "";
        vector<string>v;
        while(ss >> word) v.push_back(word);
        for(int i=0; i<v.size(); i++){
            string word = v[i];
            if(word[0] == 'a' or word[0] == 'e' or word[0] == 'i' or word[0] == 'o' or word[0] == 'u' or word[0] == 'A' or word[0] == 'E' or word[0] == 'I' or word[0] == 'O' or word[0] == 'U'){
                ans += getWord(word, i);
                ans += " ";
            }
            else{
                string temp = "";
                for(int i=1; i<word.size(); i++) temp += word[i];
                temp += word[0];
                ans += getWord(temp, i);
                ans += " ";
            }
        }
        ans.pop_back();
        return ans;
    }
};
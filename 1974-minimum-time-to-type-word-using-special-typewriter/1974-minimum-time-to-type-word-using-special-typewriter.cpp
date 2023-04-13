class Solution {
public:
    int minTimeToType(string word) {
        int count = 0;
        char curr = 'a';
        for(int i=0; i<word.size(); i++){
            char ch = word[i];
            if(ch < curr) swap(ch, curr);
            int dist = min((ch - curr), (26 - (ch - curr)));
            count += dist;
            count++;
            curr = word[i];
        }
        return count;
    }
};
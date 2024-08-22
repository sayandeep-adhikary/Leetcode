class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        map<char, int> m = 
        {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int i=s.size()-1;
        while(i>=0){
            if(i>0 and s[i] == 'V' and s[i-1] == 'I'){
                ans += 4;
                i -= 2;
            }
            else if(i>0 and s[i] == 'X' and s[i-1] == 'I'){
                ans += 9;
                i -= 2;
            }
            else if(i>0 and s[i] == 'L' and s[i-1] == 'X'){
                ans += 40;
                i -= 2;
            }
            else if(i>0 and s[i] == 'C' and s[i-1] == 'X'){
                ans += 90;
                i -= 2;
            }
            else if(i>0 and s[i] == 'D' and s[i-1] == 'C'){
                ans += 400;
                i -= 2;
            }
            else if(i>0 and s[i] == 'M' and s[i-1] == 'C'){
                ans += 900;
                i -= 2;
            }
            else{
                ans += m[s[i]];
                i--;
            }
        }
        return ans;
    }
};
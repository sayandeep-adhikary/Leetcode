class Solution {
public:
    int getAge(string s){
        int c1 = s[11] - '0';
        int c2 = s[12] - '0';
        return c1*10 + c2;
    }
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for(auto it : details){
            int age = getAge(it);
            if(age > 60) ans++;
        }
        return ans;
    }
};
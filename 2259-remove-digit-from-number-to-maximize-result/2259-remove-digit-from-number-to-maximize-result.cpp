class Solution {
public:
    bool isGreater(string a, string b){
        if(a.size() > b.size()) return true;
        else if(a.size() < b.size()) return false;
        int i=0;
        while(i<a.size() and i<b.size()){
            int x = a[i] - '0', y = b[i] - '0';
            if(x > y) return true;
            else if(x < y) return false;
            else i++;
        }
        return false; // never executes
    }
    string removeDigit(string number, char digit) {
        string ans = "0";
        for(int i=0; i<number.size(); i++){
            if(number[i] == digit){
                int rLen = number.size() - i - 1;
                string temp = number.substr(0, i) + number.substr(i+1, rLen);
                if(isGreater(temp, ans)) ans = temp;
            }
        }
        return ans;
    }
};
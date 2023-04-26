class Solution {
public:
    string reformatDate(string date) {
        string year = "";
        string day = "";
        string month = "";
        string ans = "";
        unordered_map<string, string>mp;
        mp = {{"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"}, {"Apr", "04"}, {"May", "05"}, {"Jun", "06"}, {"Jul", "07"}, {"Aug", "08"}, {"Sep", "09"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}};
        for(int i=date.size()-1; i>=date.size()-4; i--){
            year += date[i];
        }
        reverse(begin(year), end(year));
        if(isdigit(date[1])){
            day += date[0];
            day += date[1];
        }
        else{
            day += '0';
            day += date[0];
        }
        if(isdigit(date[1])){
            for(int i=5; i<=7; i++) month += date[i];
        }
        else{
            for(int i=4; i<=6; i++) month += date[i];
        }
        ans += year + "-" + mp[month] + "-" + day;
        return ans;
    }
};
class Solution {
public:
    int secondHighest(string s) {
        int largest = -1, ans = -1;
        for(auto it : s){
            if(isdigit(it)){
                int d = it - '0';
                if(largest < d){
                    ans = largest;
                    largest = d;
                }
                else if(d>ans and d<largest) ans = d;
            }
        }
        return ans;
    }
};
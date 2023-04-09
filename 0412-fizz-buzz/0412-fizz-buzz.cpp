class Solution {
public:
    string convert(int n){
        int temp = n;
        int rem;
        string s;
        while(temp != 0){
            rem = temp % 10;
            s.push_back(rem+'0');
            temp /= 10;
        }
        reverse(s.begin(), s.end());
        return s;
    }
    vector<string> fizzBuzz(int n) {
        vector<string>ans;
        for(int i=1; i<=n; i++){
            if(i%15 == 0) ans.push_back("FizzBuzz");
            else if(i%3 == 0) ans.push_back("Fizz");
            else if(i%5 == 0) ans.push_back("Buzz");
            else ans.push_back(convert(i));
        }
        return ans;
    }
};
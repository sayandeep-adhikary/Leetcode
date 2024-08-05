class Solution {
public:
    string interpret(string command) {
        string ans = "";
        int i = 0;
        while(i<command.size()-1){
            if(command[i] == 'G'){
                ans += "G";
                i++;
            }
            else if(command[i] == '(' and command[i+1] == ')'){
                ans += "o";
                i+=2;
            }
            else {
                ans += "al";
                i+=4;
            }
        }
        if(command[command.size()-1] == 'G') ans += "G";
        return ans;
    }
};
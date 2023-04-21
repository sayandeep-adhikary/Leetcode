class Solution {
public:
    bool check(int i, int j,int n){
         return (i>=0 && j>=0 && i <n && j<n);
    }  
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int x = startPos[0];
        int y = startPos[1];
        vector<int> ans;
        for(int i = 0;i<s.size();i++){
           int x = startPos[0];
           
           int y = startPos[1];
           int count = 0;
           for(int j=i;j<s.size();j++){
      
               if(s[j] == 'L'){
                   if(check(x,y-1,n)){
                       x = x;
                       y = y-1;
                       count++;
                       
                   }
                   else {
                       break;
                       count = 0;
                   }
               }
               if(s[j] == 'U'){
                   
                   if(check(x-1,y,n)){
                       x = x-1;
                       y = y;
                       count++;
                   }
                   else {
                       break;
                       count = 0;
                   }
               }
               if(s[j] == 'R'){
                   if(check(x,y+1,n)){
                       x = x;
                       y = y+1;
                       count++;
                   }
                   else {
                       break;
                       count = 0;
                   }
               }
               if(s[j] == 'D'){
                   if(check(x+1,y,n)){
                       x = x+1;
                       y = y;
                       count++;
                   }
                   else {
                       break;
                       count = 0;
                   }
               }
               
               
           }
            ans.push_back(count);
        }
        return ans;
    } 
};
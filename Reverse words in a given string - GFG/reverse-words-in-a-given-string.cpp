//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        S += ".";
        string temp = "";
        vector<string>v;
        for(int i=0; i<S.size(); i++){
            if(S[i] != '.'){
                temp += S[i];
            }
            else{
                v.push_back(temp);
                v.push_back(".");
                temp = "";
            }
        }
        temp = "";
        reverse(v.begin(), v.end());
        for(int i=1; i<v.size(); i++) temp += v[i];
        return temp;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
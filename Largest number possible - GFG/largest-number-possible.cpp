//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int n, int s){
        // code here
        string ans="";
        int num=9;
        
        if(s==0 && n>1)
        {
            return "-1";
        }
        else if(n*9<s)
        {
            return "-1";
        }
        
        for(int i=0;i<n;i++)
        {
            if(num>=s)
            {
                num=s;
            }
            ans=ans+char(num+48);
            s=s-num;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
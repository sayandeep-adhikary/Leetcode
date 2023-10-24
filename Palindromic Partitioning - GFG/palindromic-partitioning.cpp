//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// simplest solution

int dp1[500],dp2[500][500];
class Solution{
public:
    bool palin(int i,int j,string &s)
    {
        if(j-i<=1) return s[i]==s[j];
        if(dp2[i][j]!=-1) return dp2[i][j];
        return dp2[i][j]= s[i]==s[j] && palin(i+1,j-1,s);
    }
    int f(int i,int j,string &s)
    {
        if(i>j) return 0;
        if(dp1[i]!=-1) return dp1[i];
        int ans=INT_MAX;
        for(int k=i;k<=j;k++)
        {
            if(palin(i,k,s)) 
            ans=min(ans,1+f(k+1,j,s));
        }
        
        return dp1[i]=ans;
    }
    int palindromicPartition(string str)
    {
        memset(dp1,-1,sizeof(dp1));
        memset(dp2,-1,sizeof(dp2));
        return f(0,str.length()-1,str)-1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
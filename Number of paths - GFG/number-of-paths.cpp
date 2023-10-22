//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution
{
    public:
    #define ll long long
    #define mod 1000000007
    
    ll power(ll a, ll n)
    {
      ll res = 1;
      while(n)
      {
        if(n % 2) res = (res * 1LL * a) % mod;
        n/= 2;
        a = (a * 1LL * a) % mod;
      }
      return res;
    }
    
    long long  numberOfPaths(int m, int n)
    {
        int N = m+n-2;
        int r = m-1;
        long long res = 1;

        for(int i=1;i<=r;i++)
        {
            res = (res * 1LL * (N - r +i)) % mod;
            res = (res * 1LL * power(i , mod-2)) % mod; 
        }

        return res;
    }
};


//{ Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N, M;
		cin>>M>>N;
		Solution ob;
	    cout << ob.numberOfPaths(M, N)<<endl;
	}
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
          if(n<=0)
        return "";
        
        long long int div = n/26;
        long long int md = n%26;
        
        if(md == 0){
            string ans = colName(div-1);
            ans +='Z';
            return ans;
        }
        else{
        string ans = colName(div);
        ans += 'A'+md-1;
        return ans;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends
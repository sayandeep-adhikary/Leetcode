//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
            const int bits=16;
        d=d%bits;
        if(d==0) {
            return {n,n};
        }
        int limit=(1<<bits)-1;
        int leftRotate=((n<<d)|(n>>(bits-d)))&limit;
        int rightRotate=((n>>d)|(n<<(bits-d)))&limit;
        return {leftRotate,rightRotate};
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
//{ Driver Code Starts
// An efficient C++ program to compute 
// sum of bitwise OR of all pairs
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n)
    {
    	//Complete the function
    	long long int res = 0;
        for(int i=0;i<32;i++) {
           long long  int zero=0,one=0;
            
            for(int j=0;j<n;j++) {
                if (arr[j] % 2 == 0)
                 zero++;
                else
                 one++;
                arr[j] /= 2;
            }
            
           
           res+= (1<<i) *zero * one;
            
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
	 int n ;
	 cin>>n;
	 int arr[n+1];
	 for( int i=0;i<n;i++)
	    cin>>arr[i];
	 Solution ob;
	 cout<<ob.sumXOR(arr, n)<<endl;
	}	
	return 0;
}

// } Driver Code Ends
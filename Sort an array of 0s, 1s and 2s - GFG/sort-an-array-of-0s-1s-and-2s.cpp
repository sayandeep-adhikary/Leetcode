//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int zeroCount = 0;
        int oneCount = 0;
        int twoCount = 0;
        for(int i=0; i<n; i++){
            if(a[i] == 0) zeroCount++;
            else if(a[i] == 1) oneCount++;
            else twoCount++;
        }
        int j=0;
        for(int i=0; i<zeroCount; i++){
            a[j++] = 0;
        }
        for(int i=0; i<oneCount; i++){
            a[j++] = 1;
        }
        for(int i=0; i<twoCount; i++){
            a[j++] = 2;
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends
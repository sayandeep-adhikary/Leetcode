//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int z=n-1,i=n-1,cnt=0;
	    while(i>=0){
	        if(arr[i--]==0) cnt++;
	    }
	    i=0;z=0;
	    while(i<n) {
	        if(arr[i]!=0) arr[z++]=arr[i];
	        i++;
	    }
	    i=n-1;
	    while(cnt--) arr[i--]=0;
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
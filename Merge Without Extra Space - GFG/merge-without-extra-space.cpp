//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            vector<int>v;
            int i=0;
            int j=0;
            while(i<n and j<m){
                if(arr1[i] < arr2[j]){
                    v.push_back(arr1[i]);
                    i++;
                }
                else{
                    v.push_back(arr2[j]);
                    j++;
                }
            }
            while(i<n){
                v.push_back(arr1[i++]);
            }
            while(j<m){
                v.push_back(arr2[j++]);
            }
            i = 0;
            j = 0;
            for(auto it : v){
                if(i < n) arr1[i++] = it;
                else arr2[j++] = it;
            }
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
      vector<int>vis(100000,1e8);
      queue<pair<int,int>>q;
      q.push({start,0});
    
      while(!q.empty())
      {
          int temp=q.front().first;
          int step=q.front().second;
          q.pop();
          
          if(temp==end)return step;
          for(auto x:arr)
          {
              int y=(temp*x)%100000;
              if(1+step<vis[y])
              {
                  q.push({y,step+1});
                  vis[y]=1+step;
              }
          }
      }
      
      return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends
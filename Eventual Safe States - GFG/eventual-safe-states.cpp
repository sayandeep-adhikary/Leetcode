//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool dfs(int node,vector<int> adj[],vector<int> &vis){
        vis[node]=1;
        bool ans=true;
        for(auto i : adj[node]){
            if(vis[i])
                return false;
            ans &=dfs(i,adj,vis);
        }
        vis[node]=0;
        return ans;
    }
    
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        vector<int> vis(V,0),ans;
        for(int i=0;i<V;i++){
            if(dfs(i,adj,vis))
                ans.push_back(i);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends
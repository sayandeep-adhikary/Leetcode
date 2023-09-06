//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
	void dfs(int i,vector<int>&vis,stack<int>&s,vector<int>adj[]){
        vis[i]=1;
        for(auto nei:adj[i]){
            if(vis[nei]==0){
                dfs(nei,vis,s,adj);
            }
        }
        s.push(i);
    }
    int findMotherVertex(int V, vector<int>adj[])
    {
        // Code here
        stack<int>s;
        vector<int>vis(V);
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                dfs(i,vis,s,adj);
            }
        }
       int ans=s.top();
       vis.assign(V,0);
       dfs(ans,vis,s,adj);
       for(int i=0;i<V;i++){
           if(vis[i]==0){
               return -1;
           }
       }
       return ans;
    }

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
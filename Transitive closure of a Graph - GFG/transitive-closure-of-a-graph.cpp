//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Back-end complete function Template for C++

class Solution{
public:
    void dfs(int node, vector<int> &vis , vector<vector<int>> &adj){
        vis[node] = 1;
        for(auto it : adj[node]){
            if(vis[it] == 0){
                dfs(it ,vis, adj);
            }
        }
        return;
    }
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
        // code here
        vector<vector<int>> adj(N);
        for(int i = 0;i<N;i++)
        {
            for(int j = 0;j<N;j++)
            {
                if(graph[i][j] == 1){
                    adj[i].push_back(j);
                }
            }
        }
        vector<vector<int>> ans(N , vector<int>(N , 0));
        
        //check for node i , how many nodes can it edit 
        
        for(int i = 0;i<N;i++)
        {
            vector<int> vis(N , 0);
            dfs(i , vis , adj);
            for(int j = 0;j<N;j++)
            {
                if(vis[j] == 1){
                    ans[i][j]=1;   
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> graph(N, vector<int>(N, -1));
        for(int i = 0;i < N;i++)
            for(int j=0;j<N;j++)
            cin>>graph[i][j];
        
        Solution ob;
        vector<vector<int>> ans = ob.transitiveClosure(N, graph);
        for(int i = 0;i < N;i++)
            {for(int j = 0;j < N;j++)
                cout<<ans[i][j]<<" ";
        cout<<"\n";}
    }
    return 0;
}
// } Driver Code Ends
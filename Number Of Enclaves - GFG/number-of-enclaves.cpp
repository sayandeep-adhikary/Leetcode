//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
private:
    void dfs(int i, int j, vector<vector<int>> &grid, vector<vector<bool>> &vis, int n, int m){
        vis[i][j] = true;
        grid[i][j] = 0;
        
        int dx[] = {-1, 0, 1,  0};
        int dy[] = { 0, 1, 0, -1};
        
        for(int dir = 0; dir < 4; dir++){
            int ndx = i + dx[dir];
            int ndy = j + dy[dir];
            
            if(ndx >= 0 and ndx < n and ndy >= 0 and ndy < m and grid[ndx][ndy] == 1 and !vis[ndx][ndy]){
                dfs(ndx, ndy, grid, vis, n, m);
            }
        }
        
        return;
    }
    
public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        int n = grid.size(), m = grid[0].size();
                    
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        
        for(int i=0; i<m; i++){
            if(grid[0][i] == 1 and !vis[0][i])
                dfs(0, i, grid, vis, n, m);
                
            if(grid[n-1][i] == 1 and !vis[n-1][i])
                dfs(n-1, i, grid, vis, n, m);
        }
        
        for(int j=1; j<n-1; j++){
            if(grid[j][0] == 1 and !vis[j][0])
                dfs(j, 0, grid, vis, n, m);
                
            if(grid[j][m-1] == 1 and !vis[j][m-1])
                dfs(j, m-1, grid, vis, n, m);
        }
        
        int ans = 0;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                if(grid[i][j] == 1)
                    ans++;
                    
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends
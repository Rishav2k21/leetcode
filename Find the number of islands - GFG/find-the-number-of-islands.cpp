//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

void dfs(int row,int col,vector<vector<int>> &vis,vector<vector<char>>& grid,int m, int n){
    vis[row][col] = 1;
    vector<int> drow = {0,1,1,1,0,-1,-1,-1};
    vector<int> dcol = {-1,-1,0,1,1,1,0,-1};
    
    for(int i=0;i<8;i++){
        int nrow = row+drow[i];
        int ncol = col+dcol[i];
        
        if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&!vis[nrow][ncol]&&grid[nrow][ncol]=='1'){
            dfs(nrow,ncol,vis,grid,m,n);
        }
    }
    
}

class Solution {
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int count = 0;
        
        for(int row = 0;row<n;row++){
            for(int col = 0;col<m;col++){
                if(vis[row][col]==0 && grid[row][col]=='1'){
                    dfs(row,col,vis,grid,m,n);
                    count++;
                }
            }
        }
        return count;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends
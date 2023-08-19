//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
   void dfs(int row,int col,vector<vector<int>> &vis,vector<vector<int>> &grid){
        int n=grid.size();
        int m=grid[0].size();
        vis[row][col]=1;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            
            if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&!vis[nrow][ncol]&&grid[nrow][ncol]==1){
                vis[nrow][ncol]=1;
                dfs(nrow,ncol,vis,grid);
            }
        }
    }
    
    
    
    
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i=0;i<m;i++){
            if(grid[0][i]==1){
                dfs(0,i,vis,grid);
            }
            if(grid[n-1][i]==1){
                dfs(n-1,i,vis,grid);
            }
        }
        for(int i=0;i<n;i++){
            if(grid[i][0]==1){
                dfs(i,0,vis,grid);
            }
            if(grid[i][m-1]==1){
                dfs(i,m-1,vis,grid);
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&&!vis[i][j]){
                    count++;
                }
            }
        }
        return count;
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
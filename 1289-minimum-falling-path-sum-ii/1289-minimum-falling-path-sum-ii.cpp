class Solution {
public:

  int dp[205][205];
     int solve(vector<vector<int>>& grid,int row,int col){
         int m=grid[0].size();
        int n=grid.size();
        if(row==n-1 ) return grid[row][col];
         int ans=INT_MAX;
       if(dp[row][col]!=-1) return dp[row][col];
        for(int j=0;j<m;j++){
            if(j!=col) {
                ans=min(ans,solve(grid,row+1,j));
            }
        }
        return dp[row][col]=ans+grid[row][col];
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
      int mini=INT_MAX;
        int n=grid.size();
        int m=grid[0].size();
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++){
            mini=min(mini,solve(grid,0,i));
        }
        return mini;
    
    }
};
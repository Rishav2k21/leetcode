//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// User function Template for C++

class Solution{
public:
    void dfs(int i,int j, int rows, int cols, vector<vector<char>> &mat, vector<vector<int>> &vis){
        vis[i][j] = 1;
        vector<int> row_inc = {-1,0,1,0};
        vector<int> col_inc = {0,-1,0,1};
        for(int k=0;k<4;k++){
            int rn = i+row_inc[k];
            int cn = j+col_inc[k];
            if(rn>=0 && rn<rows && cn>=0 && cn<cols && !vis[rn][cn] && mat[rn][cn]=='O'){
                dfs(rn,cn,rows,cols,mat,vis);
            }
        }
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0||i==n-1||j==0||j==m-1){
                    if(mat[i][j]=='O'){
                        if(!vis[i][j]){
                            dfs(i,j,n,m,mat,vis);
                        }
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0){
                    mat[i][j] = 'X';
                }
            }
        }
        return mat;
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
       int n=grid.size();
       int m=grid[0].size();
       int cnt=0;
       int vis[n][m];
       queue<pair<pair<int,int>,int>>q;
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(grid[i][j]==2){
                   q.push({{i,j},0});
                   vis[i][j]=2;
               }
               else{
                   vis[i][j]=0;
               }
               if(grid[i][j]==1)cnt++;
           }
       }
       int cn=0;
       int time=0;
       while(!q.empty()){
           int r=q.front().first.first;
           int c=q.front().first.second;
           int t=q.front().second;
           time=max(time,t);
           q.pop();
           int dr[]={-1,0,1,0};
           int dc[]={0,1,0,-1};
           for(int i=0;i<4;i++){
               int row=r+dr[i];
               int col=c+dc[i];
               if(row>=0 && row<n && col>=0 && col<m && vis[row][col]==0 && grid[row][col]==1){
                   q.push({{row,col},t+1});
                   vis[row][col]=2;
                   cn++;
               }
           }
       }
       if(cn!=cnt)return -1;
       return time;
       
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
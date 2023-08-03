//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
          if(!A[0][0]) return -1;
        vector<vector<int>> vis(N,vector<int>(M,0));
        queue<pair<pair<int,int>,int >>q;
        q.push({{0,0},0});
        int r[]={-1,0,1,0};
        int c[]={0,1,0,-1};
        int ans=1e9;
        while(!q.empty()){
          int i=q.front().first.first;
          int j=q.front().first.second;
         int p=q.front().second;
         q.pop();
         if(i==X && j==Y){
            
            return p;
             
         }
         else{
             for(int k=0;k<4;k++){
                 int row=i+r[k];
                 int col=j+c[k];
                  if(row>=0 && row<N && col>=0 && col<M && !vis[row][col] && A[row][col]){
                  vis[row][col]=1;
                     q.push({{row,col},p+1});
                    
                 }
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
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends
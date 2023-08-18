//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool detect(int i,vector<int>adj[],int vis[]){
        queue<pair<int,int>>q;
        q.push({i,-1});
        vis[i]=1;
        while(!q.empty()){
            int node=q.front().first;
        int parent=q.front().second;
        q.pop();
        for(ip:adj[node]){
            if(!vis[ip]){
                q.push({ip,node});
                vis[ip]=1;
            }
            //visited to hai but uske andar parent bhi ni hai tb cycle
            else if(parent!=ip){
                return true;
            }
        }
        
        
        
        
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        int vis[V]={0};
      for(int i=0;i<V;i++){
          if(!vis[i]){
             if( detect(i,adj,vis)) return true;
              
          }
      }
      return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends
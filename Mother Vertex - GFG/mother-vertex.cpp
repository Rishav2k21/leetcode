//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
    void dfs1(vector<bool> &visited, vector<int> adj[], int v) {
        visited[v] = true;
        for (int u : adj[v]) {
            if (!visited[u]) {
                dfs1(visited, adj, u);
            }
        }
    }

    void dfs2(vector<bool> &visited, vector<int> adj[], int v) {
        visited[v] = true;
        for (int u : adj[v]) {
            if (!visited[u]) {
                dfs2(visited, adj, u);
            }
        }
    }

public:
    int findMotherVertex(int V, vector<int> adj[]) {
        vector<bool> visited(V, false);
        int lastVisited = -1;  // Initialize the last visited vertex to -1.

        // Perform a DFS starting from each unvisited vertex.
        for (int v = 0; v < V; ++v) {
            if (!visited[v]) {
                dfs1(visited, adj, v);
                lastVisited = v;  // Update the last visited vertex.
            }
        }

        // Reset the visited array.
        fill(visited.begin(), visited.end(), false);

        // Check if the lastVisited vertex is a mother vertex by doing a DFS again.
        dfs2(visited, adj, lastVisited);

        // If all vertices are visited, then lastVisited is a mother vertex.
        for (int v = 0; v < V; ++v) {
            if (!visited[v]) {
                return -1;  // No mother vertex found.
            }
        }

        return lastVisited;  // Return the potential mother vertex.
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
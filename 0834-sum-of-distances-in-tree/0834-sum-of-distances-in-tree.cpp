class Solution {
public:
    long   fin=0;
    vector<int> count;
    int N;
   int dfs(unordered_map<int, vector<int>> &adj, int curr_node, int prev_node, int curr_depth){
       int total=1;
       fin+=curr_depth;
       for(int  &ch:adj[curr_node]){
           if(ch==prev_node)continue;
           
             total+= dfs(adj,ch,curr_node,curr_depth+1);
           }
       
       count[curr_node]=total;
       return total;
   }
        
        void DFS(unordered_map<int, vector<int>> &adj, int parent_node, int prev_node, vector<int>& result,int n) {
        
        for(int &child : adj[parent_node]) {
            if(child == prev_node)
                continue;
            
            result[child] = result[parent_node] - count[child] + (n - count[child]);
            DFS(adj, child, parent_node, result,n);
        }
        
    }
        
    
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> adj;
      
        
        for(auto &vec : edges) {
            int u = vec[0];
            int v = vec[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
       count.resize(n, 0);
    
        dfs(adj,0,-1,0);
        vector<int>result(n,0);
       result[0]=fin ;
        DFS(adj,0,-1,result,n);
       return result;
        
    }
};
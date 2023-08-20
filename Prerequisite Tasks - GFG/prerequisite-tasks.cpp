//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    
public:
	bool isPossible(int N,int P, vector<pair<int, int> >& prereq) {
        int indigree[N]={0};
        queue<int>q;
        vector<int>adj[N];
        for(auto edges: prereq){
            adj[edges.second].push_back(edges.first);
        }
        
        for(int i=0; i<N; i++){
            for(auto x: adj[i])
            {
                indigree[x]++;
            }
        }
        
        for(int i=0; i<N; i++){
            if(indigree[i]==0){
                q.push(i);
            }
        }
        
        int cnt=0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            cnt++;
            for(auto x: adj[node]){
                indigree[x]--;
                if(indigree[x]==0){
                    q.push(x);
                }
            }
        }
        
        return cnt==N;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N,P, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends
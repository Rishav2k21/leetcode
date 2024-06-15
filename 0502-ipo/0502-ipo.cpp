class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profit, vector<int>& capital) {
        int n=capital.size();
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            v[i]={capital[i],profit[i]};
        }
        sort(v.begin(),v.end());
        int s=0;
        priority_queue<int>p;
        while(k--){
            while(s<n && v[s].first<=w){
                p.push(v[s].second);
                       s++;
                       }
            if(p.empty()) return w;
            w+=p.top();
            p.pop();
            
        }
        return w;
        
        
        
    }
};
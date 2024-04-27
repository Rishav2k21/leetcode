class Solution {
public:
    int dp[101][101];
    int find(string ring, string key,int n,int m,int i1,int i2){
        if(i2==m)return 0 ;
        int steps=INT_MAX;
        if(dp[i1][i2]!=-1)return dp[i1][i2];
        for(int i=0;i<n;i++){
            if(ring[i]==key[i2]){
            int count=min(abs(i1-i),n-abs(i1-i));
                steps=min(steps,count+find(ring,key,n,m,i,i2+1));
                
            }
        }
        return dp[i1][i2]=steps;
    }
    int findRotateSteps(string ring, string key) {
        int n=ring.size();
        int m=key.size();
        int i=0;
        int j=0;
        memset(dp,-1,sizeof(dp));
        return find(ring,key,n,m,i,j)+m;
    }
};
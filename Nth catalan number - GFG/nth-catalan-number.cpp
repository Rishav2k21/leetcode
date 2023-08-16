//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int mod=1e9+7;
    //Function to find the nth catalan number.
    int cat(int n){
        long long int catalon[n+1];
      catalon[0]=catalon[1]=1;
      for(int i=2;i<=n;i++){
          catalon[i]=0;
          for(int j=0;j<i;j++){
          catalon[i]=(catalon[i]+(catalon[j]*catalon[i-j-1])%mod)%mod;
      }
        
      }
      return catalon[n];
        
        
        
    }
    int findCatalan(int n) 
    {
     return cat(n);
    }
};

//{ Driver Code Starts.
int main() 
{
	int t;
	cin>>t;
	while(t--) {
	    
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}
// } Driver Code Ends
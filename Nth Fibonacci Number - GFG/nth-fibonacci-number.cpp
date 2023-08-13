//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int ans=0;
  int anss=0;
  int prev=0;
  int mod=1000000007;
    int nthFibonacci(int n){
       
        for(int i=1;i<=n;i++){
             if(i==1) prev=1;
        if(i==2) anss=1;
            ans=(prev+anss);
            prev=anss;
            anss=ans%mod;
        }
        return ans%mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
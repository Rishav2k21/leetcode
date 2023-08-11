//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
 vector<vector<long long int>>dp;
    
    long long int solve(int sum, int arr[], int i)
    {
        if(sum == 0) return 1;
        if(sum < 0 || i < 0) return 0;
        
        if(dp[sum][i] != -1) return dp[sum][i];
        
        long long int pick = solve(sum-arr[i], arr, i);
        long long int not_pick = solve(sum, arr, i-1);
        
        return dp[sum][i] = pick+not_pick;
    }
  
    long long int count(int arr[], int n, int sum) 
    {
        dp.resize(sum+1, vector<long long int>(n, -1));
        return solve(sum, arr, n-1);    
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends
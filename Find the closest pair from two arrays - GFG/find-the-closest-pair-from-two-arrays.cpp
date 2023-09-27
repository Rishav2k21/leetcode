//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
        
        int minDiff = INT_MAX;
    int diff,sum;
    int a1 = 0, a2 = n-1, b1 = 0, b2 = m-1;
    vector<int> ans;
        
    while(a1 < n && b2 >= 0){
        sum = arr[a1] + brr[b2];
        diff = abs(sum - x);
        if(diff < minDiff){
           ans.clear();
           ans.push_back(arr[a1]);
           ans.push_back(brr[b2]);
           minDiff = diff;
        }
        if(sum > x) b2--;
        else a1++;
    }
    return ans;

    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}

// } Driver Code Ends
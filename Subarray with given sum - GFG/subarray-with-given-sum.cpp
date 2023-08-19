//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        vector<int>ans;
        int start=0;
        int st=0;
        int sum=0;
        if(s==0) return {-1};
        while((st<=n) && (st>=start)){
           
            if(sum==s){
               ans.push_back(start+1);
               ans.push_back(st);
               break;
            }
            else if(sum<s){
                
               
                sum+=arr[st];
                st++;
            }
            else{
                sum-=arr[start];
                start++;
                
            }
        }
        if(!ans.size()) {
            ans.push_back(-1);
            return ans;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
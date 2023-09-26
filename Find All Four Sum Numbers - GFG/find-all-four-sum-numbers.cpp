//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
   int n=arr.size();
        vector<vector<int>> ans;
        set<vector<int>> mp;
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n-3;i++)
        {
            int sum=arr[i];
            vector<int> vec;
            vec.push_back(arr[i]);
            for(int j=i+1;j<n-2;j++)
            {
                sum+=arr[j];
                vec.push_back(arr[j]);
                
                int left=j+1,right=n-1;
                while(left<right)
                {
                    int x=arr[left]+arr[right];
                    if((x+sum)==k){
                        vec.push_back(arr[left]);
                        vec.push_back(arr[right]);
                        if(mp.find(vec)==mp.end()){
                            mp.insert(vec);
                            ans.push_back(vec);
                        }
                        vec.pop_back();
                        vec.pop_back();
                        left++;
                        right--;
                    }
                    else if((x+sum)>k)
                        right--;
                    else
                        left++;
                }
                sum-=arr[j];
                vec.pop_back();
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
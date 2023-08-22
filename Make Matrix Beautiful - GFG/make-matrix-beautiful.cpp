//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        int row=matrix.size();
        int col=matrix[0].size();
        int maxi=INT_MIN;
     for(int i=0;i<row;i++){
         int sum=0;
         for(int j=0;j<col;j++){
            sum+=matrix[i][j];
         }
          maxi=max(maxi,sum);
     }
     int maxii=INT_MIN;
      for(int j=0;j<col;j++){
         int sumii=0;
         for(int i=0;i<row;i++){
            sumii+=matrix[i][j];
         }
          maxii=max(maxii,sumii);
     }
     int maxiii=max(maxi,maxii);
     int count=0;
      for(int i=0;i<row;i++){
         int  sums=0;
         for(int j=0;j<col;j++){
            sums+=matrix[i][j];
         }
         count+=(maxiii-sums);
     }
     return count;
     
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
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends
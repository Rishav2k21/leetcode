//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
         string col;
        while(n>0){
            if(n%26==0){
                col = 'Z' + col;
                n = (n/26) - 1;
            }
            else{
                col = char(n%26 + 64) + col;
                n /= 26;
            }
        }
        return col;
    
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends
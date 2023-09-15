//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
          if(n==1)return 1;
        if(n==2)return 2;
        long long a=1,b=1,c=2;
        for(int i=3;i<=n;i++)
        {
            long long int t=c;
            c=(a+b+c)%1000000007;
            a=b;
            b=t;
        }
        return c;
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends
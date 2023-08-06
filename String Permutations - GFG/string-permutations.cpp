//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    long long fact(int n)
    {
        if(n==0 || n==1)
        {
            return 1;
        }
        return n*fact(n-1);
    }
    
    vector<string> permutation(string S)
    {
        //Your code here
        sort(S.begin(),S.end());
        vector<string>st;
        long long k=S.size();
        long long p=fact(k);
        // st.push_back(S);
        for(int i=0; i<p; i++)
        {
                        st.push_back(S);
            next_permutation(S.begin(),
                        S.end());
        }
        sort(st.begin(),st.end());
        return st;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends
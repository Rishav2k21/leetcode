// class Solution {
// public:
//     string convert(string s, int numRows) {
//         int n=s.size()-1;
//         string st;
//         int jum=numRows*2-2;
//         for(int i=0;i<numRows;i++){
//             for(int j=i;j<=n;j+=jum){
//                 st.push_back(s[j]);
//                 int k=j+jum-2*i;
//                 if(k<n&& j!=k && k!=j+jum){
//                     st.push_back(s[k]);
//                 }
//             }
        
//         }
//         return st;
//     }
// };
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        int n = s.size();
        int jump = 2*numRows - 2;
        string ans;
        for(int i=0; i<numRows; i++){
            for(int j=i; j<n; j+=jump){
                int k = j + jump - 2*i ;
                ans.push_back(s[j]);
                if(k<n && k!=j && k!=j+jump) ans.push_back(s[k]);
            }
        }
        return ans;
    }
};
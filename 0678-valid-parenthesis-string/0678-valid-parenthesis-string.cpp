class Solution {
public:
    bool checkValidString(string s) {
     int n=s.length();
        stack<int>st;
        stack<int>star;
        for(int i=0;i<n;i++){
            if(s[i]=='(')
            st.push(i);
            else if(s[i]=='*') 
            star.push(i);
            else{
                if(!st.empty())
                st.pop();
                else if(!star.empty())
                star.pop();
                else
                return false;
            }
        }
        while(!st.empty()&&!star.empty()){
            if(st.top()>star.top()) return false;
            st.pop();
            star.pop();
        }
        return st.empty()?true:false;
          
         
    }
};
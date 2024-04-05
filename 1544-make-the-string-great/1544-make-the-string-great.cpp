class Solution {
public:
    stack<char>st;
    string makeGood(string s) {
        for(int i=0;i<s.size();i++){
            if(st.size()>0 && (s[i]-'a'==st.top()-'A' || s[i]-'A'==st.top()-'a')){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string str;
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
         reverse(str.begin(),str.end());
        
        return   str;
        
    }
};
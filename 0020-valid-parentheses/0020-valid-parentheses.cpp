class Solution {
public:
    bool isValid(string st) {
        stack<char>s;
        if(st.size()%2!=0) return false;
        for(int i=0;i<st.size();i++){
            if(st[i]=='(' || st[i]=='{' || st[i]=='['){
                s.push(st[i]);
            }
            else{
                if(s.empty()) return false;
                if((s.top()=='(' && st[i]==')')||(s.top()=='{' && st[i]=='}')|| (s.top()=='[' && st[i]==']')){
                    s.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(s.empty()) return true;
        else return false;
    }
};
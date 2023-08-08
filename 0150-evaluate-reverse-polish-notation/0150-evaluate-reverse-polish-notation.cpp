class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        int p,q,r,k;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="*"|| tokens[i]=="/" || tokens[i]=="-") {
              if(tokens[i]=="+") {
                  p=s.top();
                  s.pop();
                   q=s.top();
                   s.pop();
                  r=p+q;
                  s.push(r);
              }           
              if(tokens[i]=="-"){
                    p=s.top();
                  s.pop();
                  q=s.top();
                   s.pop();
                   r=q-p;
                  s.push(r);
              }
              if(tokens[i]=="*"){
                   p=s.top();
                  s.pop();
                   q=s.top();
                  s.pop();
                  r=p*q;
                  s.push(r);
              }
              if(tokens[i]=="/"){
                   p=s.top();
                  s.pop();
                   q=s.top();
                  s.pop();
                   r=q/p;
                  s.push(r); 
              }  
            }
            else{
              k=stoi(tokens[i]);
                s.push(k);
              
            }
        }
        return s.top();
    }
};
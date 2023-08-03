class Solution {
public:
    string reverseWords(string s) {
      string v;
        int k=0;
        int p=0;
       string st;
        for(int i=s.size()-1;i>=0;i--){
            
           if(s[i]==' '){
           
               reverse(st.begin(),st.end());
              
               v+=st+' ';
             
               st="";
               
               
           }
            else{
                st+=s[i];
             
            }
        }
        reverse(st.begin(),st.end());
        v=v+st;
        int i=0;
        while(v[i]==' ')
        {
             v.erase(v.begin());
        }
        for(int j=0;j<v.size();j++)
        { 
            if(v[j]==' ')
            {
                 int k=j+1;
                while(k<v.size() && v[k]==' '){
                    v.erase(v.begin()+k);
                }
            }
               
        }
        i=v.size()-1;
        while(v[i]==' ')
        {
           v.erase(v.begin()+i);
            i--;
        }
            
        return v;
        
    }
};
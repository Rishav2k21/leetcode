class Solution {
public:
    bool isSubsequence(string s, string t) {
        int flag=1; 
        int k=0;
        int count=0;
        for(int i=0;i<t.size();i++){
            if(s[k]==t[i]){
               
                count++;
                k++;
            }
            
        }
        if(count==s.size()){
            return true;
            
        }
        else{
            return false;
        }
    }
};
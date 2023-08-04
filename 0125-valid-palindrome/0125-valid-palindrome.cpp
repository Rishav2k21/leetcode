class Solution {
    bool valid(char ch){
         if( (ch>='a'&& ch<='z') || (ch>='A'&& ch<='Z') || (ch>='0'&& ch<='9')){
           return 1;
        }
        return 0; 
    }
    char lower(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<=9)){
            return ch;
        }  
        else{
            char nu=ch-'A'+'a';
            return nu;
        }
        }
    bool palindrome( string temp1){
        int q=temp1.length();
    int start=0;
    int end=q-1;
 while(start<=end){
     if(temp1[start]!=temp1[end]){
         return 0;   
     }
     else{
         start++;
         end--;
     }   
 }
    return 1;
   
    }
    
public:

    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }
        for(int i=0;i<temp.length();i++){
        temp[i]=lower(temp[i]);
        }
       return palindrome(temp);
    }
};
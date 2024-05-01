class Solution {
public:
    string reverseVowels(string st) {
        int s=0;
        int e=st.size()-1;
            while(s<=e){
                if((st[s]=='a' ||st[s]=='e' ||st[s]=='i' ||st[s]=='o' ||st[s]=='u' ||  st[s] == 'A' || st[s] == 'E' || st[s] == 'I' || st[s] == 'O' || st[s] == 'U' ) && (st[e]=='a' ||st[e]=='e' ||st[e]=='i' ||st[e]=='o' ||st[e]=='u' ||   st[e] == 'A' || st[e] == 'E' || st[e] == 'I' || st[e] == 'O' || st[e] == 'U') ){
                    swap(st[s],st[e]);
                    s++;
                    e--;
                }
                else if(st[s]=='a' ||st[s]=='e' ||st[s]=='i' ||st[s]=='o' ||st[s]=='u' ||st[s] == 'A' || st[s] == 'E' || st[s] == 'I' || st[s] == 'O' || st[s] == 'U'){
                    e--;
                }
                else if(st[e]=='a' ||st[e]=='e' ||st[e]=='i' ||st[e]=='o' ||st[e]=='u' ||  st[e] == 'A' || st[e] == 'E' || st[e] == 'I' || st[e] == 'O' || st[e] == 'U'){
                    s++;
                }
                else {
                    s++;
                    e--;
                }
               
            }
        return st;
        
        
        
        }
};
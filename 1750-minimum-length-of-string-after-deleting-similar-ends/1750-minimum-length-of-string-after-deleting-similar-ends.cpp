class Solution {
public:
    int minimumLength(string st) {
        int e=st.size()-1;
        int s=0;
        while(s<e){
            if(st[s]==st[e]){
                while(st[s]==st[s+1] &&s<e ) s++;
                 while(st[e]==st[e-1] && s<e) e--;
                s++;
                e--;
            }
            else break;
        }
        if(e-s+1 <0)return 0;
        return  e-s+1;
    }
};
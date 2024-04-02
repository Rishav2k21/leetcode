class Solution {
public:
    int arrangeCoins(int n) {
       long long int start=0;
       long long int i=1;
       long long int cnt=0;
        while(start<=n){
            start+=i;
            i++;
            cnt++;
        }
        if(start==n) return cnt;
        cnt--;
        return cnt;
        
        
    }
};
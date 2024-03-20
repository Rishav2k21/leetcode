class Solution {
public:
    int mySqrt(int x) {
        int start=0;
        int end=x-1;
       int ans;
        if(x==0) return 0;
           if(x<=3) return 1;
            while(start<=end){
                 int mid=start+(end-start)/2;
           long long int p=(long long int) mid*mid;
                if(p<=x){
                    ans= mid;
                    start=mid+1;
                }
                else if(p>x){
                     end=mid-1;
                }
                
            }
       
        return ans;
            
    }
};
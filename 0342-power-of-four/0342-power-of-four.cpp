class Solution {
public:
    bool isPowerOfFour(int n) {
        float p;
        p=log(n)/log(4);
       
        
        if(n==0)return 0;
      
        
        if(ceil(p)==floor(p)){
            return true;
        }
        return false;
    }
};
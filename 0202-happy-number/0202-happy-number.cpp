class Solution {
public:
    bool isHappy(int n) {
        map<int,int>m;
    while(1)
    {
        int sum=0;
        while(n)
        {
            
            sum = sum + (n%10)*(n%10);
            n = n/10;
    
        }
        n = sum;
        if(m[sum]){
            return false;
        }
        m[sum]=1;
        if(n==1)
            {
                return(true);
            }
            // if(n==37)
            // {
            //     return(false);
            // }
        
    }
    return(false);


}
    
};
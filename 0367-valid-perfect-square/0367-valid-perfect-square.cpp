class Solution {
public:
    bool isPerfectSquare(int num) {
 
        int l=sqrt(num);
        if(l*l==num)return 1;
        return 0;
    }
};
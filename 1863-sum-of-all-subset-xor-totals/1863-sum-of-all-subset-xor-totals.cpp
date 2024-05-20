class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
      int n=nums.size();
        int zorr;
        int sum=0;
        for(int i=0;i<(1<<n);i++){
            zorr=0;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    zorr=zorr^nums[j];
                }
            }
            sum+=zorr;
        }
        return sum;
    }
};
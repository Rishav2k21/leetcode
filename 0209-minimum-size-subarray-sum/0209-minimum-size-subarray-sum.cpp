class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int i=0;
        int mini=INT_MAX;
        int j=0;
        int flag=0;
        while(j<nums.size()){
            
            sum+=nums[j];
            if(sum>=target){
                while(sum>=target){
                    flag=1;
                    mini=min(mini,j-i+1);
                        sum-=nums[i++];
                }
            }
            j++;
        }
        if(flag==0) return 0;
        return mini;
    }
};
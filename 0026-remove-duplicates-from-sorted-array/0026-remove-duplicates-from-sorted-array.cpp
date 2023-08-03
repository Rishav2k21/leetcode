class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int count=0;
       int k=1;
        for(int i=1;i<nums.size();i++){
      if(nums[i]!=nums[i-1] ){
         nums[k++]=nums[i];
         count++;
      }
        }
       count=count+1;
      return count;
    
    }
};
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start=0;
        int end=nums.size();
        if(end==1) return 0;
        if(nums[0]>nums[1])return 0;
        if(nums[end-1]>nums[end-2])return end-1;
        end=end-2;
        start=1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;
            else if(nums[mid]>nums[mid-1]) start=mid+1;
            else end=mid-1;
        }
        return -1;
    }
};
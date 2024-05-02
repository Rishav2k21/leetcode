class Solution {
public:
    int findMaxK(vector<int>& nums) {
         int i=0;
        sort(nums.begin(), nums.end());

        int r = nums.size()-1;
        int l = 0;
        while( l<r){
            if(nums[l] == -nums[r])
                return nums[r];
            if(-nums[l] > nums[r])
                l++;
            else
                r--;
        }
        return -1;
    }
};
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>m;
     for(int i=0;i<nums.size();i++){
         if(m.count(nums[i])){
           int diff= abs(m[nums[i]]-i);
             if(diff<=k) return true;
         }
         m[nums[i]]=i;
         
     }
        return false;
    }
};
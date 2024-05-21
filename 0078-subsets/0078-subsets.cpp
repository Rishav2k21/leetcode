class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        int n=nums.size();
       for(int i=0;i<(1<<n);i++){
           vector<int>p;
           for(int j=0;j<32;j++){
               if(i & (1<<j)){
                  p.push_back(nums[j]);
               }
           }
           v.push_back(p);
       }
        return v;
    }
};
class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int s=0;
      sort(nums.begin(),nums.end());
        int e=nums.size()-1;
        int n =nums.size();
        int count=0;
        int mod=1e9+7;
        int ans=0;
        vector<int>p(n);
        p[0]=1;
        for(int i=1;i<n;i++){
            p[i]=(p[i-1]*2) % mod;
        }
        while(s<=e){
            if(nums[s]+nums[e]<=target){
               ans=(ans+p[e-s]) % mod;
                s++;                      
            }
            else{
                e--;
            }
            
        }
        return ans;
    }
};
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
       if(nums.size()<3){
            return false;
        }
        stack<int> s;
        int thirdele = INT_MIN;
        for(int i = nums.size()-1;i>=0;i--){
            if(nums[i]<thirdele){
                return true;
            }
            while(!s.empty() && s.top() < nums[i]){
            thirdele  = s.top();
            s.pop();
            }
            s.push(nums[i]);
        }
        return false;
    }
};
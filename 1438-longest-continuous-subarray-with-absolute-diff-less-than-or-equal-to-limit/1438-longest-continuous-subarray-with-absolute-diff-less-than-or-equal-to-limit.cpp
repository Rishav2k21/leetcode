class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
          ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        deque<int> maxi, mini;
        int j = 0, i = 0;
        int ans = 0;
        
        for (i = 0; i < nums.size(); i++) {
            // Maintain the deque for the maximums
            while (!maxi.empty() && nums[i] > maxi.back()) {
                maxi.pop_back();
            }
            // Maintain the deque for the minimums
            while (!mini.empty() && nums[i] < mini.back()) {
                mini.pop_back();
            }
            // Add the current element to both deques
            maxi.push_back(nums[i]);
            mini.push_back(nums[i]);
            
            // Check if the current window is valid
            while (maxi.front() - mini.front() > limit) {
                if (maxi.front() == nums[j]) {
                    maxi.pop_front();
                }
                if (mini.front() == nums[j]) {
                    mini.pop_front();
                }
                j++;
            }
            
            // Update the answer with the length of the current valid window
            ans = max(ans, i - j + 1);
        }
        
        return ans;
    }
};
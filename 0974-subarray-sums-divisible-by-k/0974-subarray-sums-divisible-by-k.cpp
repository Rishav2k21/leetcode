class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
          int res = 0;          // To store the result
        int prefix = 0;       // To store the current prefix sum modulo k
        vector<int> arr(k, 0); // Frequency array to store counts of remainders
        arr[0] = 1;           // Initialize with 1 to account for the subarrays that start from the beginning

        for (int i = 0; i < nums.size(); i++) {
            // Update prefix sum and take modulo k
            prefix = (prefix + nums[i] % k + k) % k;
            // Increment result by the frequency of the current remainder
            res += arr[prefix];
            // Increment the frequency of the current remainder
            arr[prefix]++;
        }
        return res; 
    }
};
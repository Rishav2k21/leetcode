class Solution {
     int counts = 0; // Initialize counts outside the count() function
    int count(int mid, vector<vector<int>>& matrix) {
        counts = 0; // Reset counts before counting
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[i].size(); j++) { // Corrected matrix size indexing
                if(matrix[i][j] <= mid) { // Corrected condition (used <= instead of <)
                    counts++;
                }
            }
        }
        return counts; // Return counts, not count
    }
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int start = matrix[0][0];
        int end = matrix[n - 1][n - 1];
        
        while(start < end) {
            int mid = start + (end - start) / 2;
            int cnt = count(mid, matrix); // Store the count
            if(cnt < k) { // Corrected condition (used < instead of ==)
                start = mid + 1;
            }
            else {
                end = mid;
            }
        } 
        return start; // Return start, not 0
    
    }
};
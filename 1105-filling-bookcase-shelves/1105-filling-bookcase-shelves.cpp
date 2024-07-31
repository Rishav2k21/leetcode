class Solution {
private:
    int helper(vector<vector<int>> &books, int idx, int remainingShelfWidth, int height, int shelfWidth, vector<vector<int>> &dp){
        if(idx >= books.size()) return height;
        if(dp[idx][remainingShelfWidth] != -1) return dp[idx][remainingShelfWidth];

        int currBookWidth  = books[idx][0];
        int currBookHeight = books[idx][1]; 

        // Case - 1
        // Put book in the new shelf
        int opt1 = height + helper(books, idx + 1, shelfWidth - currBookWidth, currBookHeight, shelfWidth, dp);
        int opt2 = INT_MAX;
        if(remainingShelfWidth >= currBookWidth){
            opt2 = helper(books, idx + 1, remainingShelfWidth - currBookWidth, max(height, currBookHeight), shelfWidth, dp);
        }
        return dp[idx][remainingShelfWidth] = min(opt1, opt2);
    }
public:
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        // For every book we have either two cases
        // Either keep that in the current shelf or create a new shelf for it.
        // This is the case for every book.
        // Book1 --> (0, Book1s.Height, shelfWidht - Book1s.Width)
        // Book2 --> (1, Books2.Height, shelfWidht - Book2s.Widht)
        // Book2 --> (1, max(Book1s.Height, Book2s.Height), shelfWidht - Book1s.Widht - Books2.Width)
        // Recurssion calls
        int sz = books.size();
        vector<vector<int>> dp(sz, vector<int>(shelfWidth + 1, -1));
        return helper(books, 0, shelfWidth, 0, shelfWidth, dp);
    }
};
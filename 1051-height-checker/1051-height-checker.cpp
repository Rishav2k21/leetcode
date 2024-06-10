class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>v;
        int n=heights.size();
        for(int i=0;i<heights.size();i++){
            v.push_back(heights[i]);
        }
        int c=0;
       sort(heights.begin(),heights.end());
        for(int j=0;j<n;j++){
            if(heights[j]!=v[j]) c++;
        }
        return c;
    }
};
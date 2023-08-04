class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=INT_MIN;
        int start=0;
        int end=height.size()-1;
        int k=0;
        while(start<end){
            if(height[start]==min(height[start],height[end])){
                
                k=height[start];
                   start++;                
            }
            else if(height[end]==min(height[start],height[end])){
                
                k=height[end];
               end--;
            }
            maxi=max(maxi,k*(end+1-start));
           
            
        }
        return maxi;
    }
};
class Solution {
public:
    // 0 1 1 2 2 2 3 3 3 3 3
    // 3 3 3 3 3 3 3 2 2 2 1
    int trap(vector<int>& height) {
        int n=height.size();
        int start[n];
        int end[n];
        start[0]=height[0];
        for(int i=1;i<n;i++){
            if(height[i]<start[i-1]){
                start[i]=start[i-1];
            }
            else{
                start[i]=height[i];
            }
        }
        end[n-1]=height[n-1];
         for(int i=n-2;i>=0;i--){
            if(height[i]<end[i+1]){
                end[i]=end[i+1];
            }
            else{
                end[i]=height[i];
            }
        }
        int anss=0;
       for(int i=0;i<n;i++){
           int ans=min(start[i],end[i]);
            anss+=(ans-height[i]);
       }
        return anss ;
    }
};
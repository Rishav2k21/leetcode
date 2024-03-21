class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start=0;
        int a=matrix.size();
        int col=matrix[0].size();
        int end=col*a-1;
       int mid;
           while(start<=end){
             mid=start+(end-start)/2;
             int element=matrix[mid/col][mid%col];
        if(target==element){
            return true; 
        }
        else if(target>element){
            
            start=mid+1;
        }
        else{
            
            end=mid-1;
        }
           }
        
     
        return false;
        
    }
};
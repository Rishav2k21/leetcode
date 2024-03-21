class Solution {
public:
    int findMin(vector<int>& arr) {
          int start=0;
      int end=arr.size()-1;
        int mini=INT_MAX;
        while(start<=end){
            int mid=start+ (end-start)/2;
           
             if(arr[start]<=arr[mid] ){
                mini=min(mini,arr[start]);
                start=mid+1;
            }
            else{
                mini=min(mini,arr[mid]);
                end=mid-1;
            }
        }
        return mini;
    }
};
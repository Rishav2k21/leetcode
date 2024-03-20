class Solution {
public:
    int lowerbound(vector<int>arr, int p){
        int start=0;
        int end=arr.size()-1;
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==p){
               
               ans=mid;
                end=mid-1;
            }
            else if(arr[mid]<p){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
        int upperbound(vector<int>arr, int p){
        int start=0;
        int end=arr.size()-1;
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==p){
               ans=mid;
               start=mid+1;
            }
            else if(arr[mid]<p){
                start=mid+1;
            }
            else{
               end=mid-1; 
            }
        }
            return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=lowerbound(nums,target);
        int h=upperbound(nums,target);
       if(l==-1){
           return {-1,-1};
       }
        return {l,h};
    }
};
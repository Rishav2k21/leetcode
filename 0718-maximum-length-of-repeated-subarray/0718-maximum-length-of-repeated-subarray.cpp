class Solution {
public:
    bool func(int mid,vector<int>& nums1, vector<int>& nums2){
    set<vector<int> >s1;
        // set<vector<int> >s2;
        int cnt=0;
        for(int i=0;i<=nums1.size()-mid;i++){
            vector<int>v1;
            cnt++;
            for(int j=i;j<nums1.size();j++){
                v1.push_back(nums1[j]);
                
                if(v1.size()>=mid){
                    break;
                }
            }
            s1.insert(v1);
            v1.clear();
            
        }
          for(int i=0;i<=nums2.size()-mid;i++){
            vector<int>v1;
              // cnt++;
              // int yi=s1.size();
            for(int j=i;j<nums2.size();j++){
                
                v1.push_back(nums2[j]);
                if(v1.size()>=mid){
                    break;
                }
            }
            if(s1.find(v1)!=s1.end())return true;
              // int yf=s1.size();
              // if(yi==yf)return true;
            v1.clear();
            
        }
        
        // if(cnt!=s.size()) return true;
        return false;
        
    }
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int start=1;
        int n1=nums1.size()-1;
        int n2=nums2.size()-1;
        int end=min(n1+1,n2+1);
        int maxi=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(func( mid,nums1,nums2)){
                maxi=mid;
                start=mid+1;  
            }
            else{
                end=mid-1;
            }
            
            
        }
        return maxi;
    }
};
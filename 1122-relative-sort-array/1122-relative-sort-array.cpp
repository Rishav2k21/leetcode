class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>m;
        for(int i=0;i<arr1.size();i++){
            m[arr1[i]]++;
        }
        vector<int>ans;
        for(int i=0;i<arr2.size();i++){
               for(int k=0;k<m[arr2[i]];k++){
                ans.push_back(arr2[i]);            
       }
            m[arr2[i]]=0;
        }
        for(auto i:m){
            if(i.second>0){
             for(int k=0;k<i.second;k++){
                ans.push_back(i.first);            
       }
            }
        }
        return ans;
    }
};
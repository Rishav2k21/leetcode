class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
        long long int sum=0;
        int p=0;
        for(int i=happiness.size()-1;i>=0 && p<k;i--){
         int s=happiness[i]-p;
            if(s<0){
                return sum;
            }
            else{
                sum+=s;
            }
            p++;
            
        }
        return sum;
    }
};
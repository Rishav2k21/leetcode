class Solution {
public:
    map<int,string>m;
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>vs;
        for(auto i : score){
            vs.push_back(i);
            
        }
        sort(score.begin(),score.end());
        int n=score.size();
        vector<string>s;
        if(n>=4){
        m[score[n-1]]="Gold Medal";
        m[score[n-2]]="Silver Medal";
        m[score[n-3]]="Bronze Medal";
        int k=4;
        for(int i=n-4;i>=0;i--){
            
      m[score[i]]=to_string(k++);
        }
       
        }
        else{
            if(n==1){
                m[score[n-1]]="Gold Medal"; 
            }
            else if(n==2){
        m[score[n-1]]="Gold Medal";
        m[score[n-2]]="Silver Medal";
            }
            else if(n==3){
        m[score[n-1]]="Gold Medal";
        m[score[n-2]]="Silver Medal";
        m[score[n-3]]="Bronze Medal";
            }
        }
         for(int i=0;i<n;i++){
            s.push_back(m[vs[i]]);
        }
        return s;
    }
};
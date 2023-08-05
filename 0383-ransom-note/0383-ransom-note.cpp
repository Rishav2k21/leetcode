class Solution {
public:
    bool canConstruct(string s, string p) {
       map<char,int>m;     
        map<char,int>mp;

        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(int i=0;i<p.size();i++){
            mp[p[i]]++;
        }
        int flag=0;
      for(auto i:m){
          if(mp[i.first]<i.second){
              flag=1;
          }
      }
        if(flag){return false;
                }
        else{
            
            return true;
        }
    }
};
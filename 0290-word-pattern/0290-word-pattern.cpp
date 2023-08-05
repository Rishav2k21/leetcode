class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string>mp;     
        map<string,char>mps;

        int k=0;
        for(int i=0;i<pattern.size();i++){
       if(k>s.size()) return false;
            string temp="";
            while( k<s.size() && s[k]!=' '){
                temp+=s[k];
                k++;
            }
            k++;
              if(mp.find(pattern[i])!=mp.end()){
                if(mp[pattern[i]]!=temp) return 0;
            }
             if(mps.find(temp)!=mps.end()){
                if(mps[temp]!=pattern[i]) return 0;
            }
            mp[pattern[i]]=temp;
            mps[temp]=pattern[i];
        }
        if(k<s.size()) return false;
        return true;
           
    }
};
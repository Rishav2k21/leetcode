class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
         map<char,char>m;
       map<char,char>p;
        for(int i=0;i<s.size();i++){
          if(m[s[i]]&& m[s[i]]!=t[i]) return false;
          if(p[t[i]] && p[t[i]]!=s[i]) return false;
            m[s[i]]=t[i];
            p[t[i]]=s[i];
    }
        return true;
       
    }
};
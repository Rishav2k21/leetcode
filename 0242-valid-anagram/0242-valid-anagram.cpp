class Solution {
public:
    bool isAnagram(string s, string t) {
      map<char,int>m;
        map<char,int>mp;
        for(int i=0;i<s.size();i++) m[s[i]]++;      
        for(int i=0;i<t.size();i++) mp[t[i]]++;
        // for(auto i:mp && j:m ){
        //     if(i.second!=j.second) return false;
        // }
        if(m!=mp) return false;
        return true;
        
    }
};
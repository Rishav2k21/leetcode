class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i;
        int flag=0;
      for( i=0;i<word.size();i++){
          if(word[i]==ch) {
              flag=1;
              break;
      } 
      }
        if(flag==0) return word;
        int start=0;
        while(start<=i){
            swap(word[start],word[i]);
            start++;
            i--;
        }
        return word;
    }
};
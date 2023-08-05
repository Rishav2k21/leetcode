class Solution {
private:
   int validateRow(vector<vector<char>>& A) {
   int r = A.size();
   int c = A.front().size();
   for(int i=0;i<c;i++)
   {
       vector<int> temp(10, 0);
       for(int j=0;j<r;j++)
       {
           if(A[j][i] == '.') continue;
           if(temp[A[j][i] - '0'])
               return false;
           temp[A[j][i] -'0'] = 1;
       }
   }
   return true;
}
    int validateColumn(vector<vector<char>>& A) {
   int r = A.size();
   int c = A.front().size();
   for(int i=0;i<r;i++)
   {
       vector<int> temp(10, 0);
       for(int j=0;j<c;j++)
       {
           if(A[i][j] == '.') continue;
           if(temp[A[i][j] - '0'])
               return false;
           temp[A[i][j] -'0'] = 1;
       }
   }
   return true;
}
int validateSquare(vector<vector<char> > &A) {
     int r = A.size();
     int c = A.front().size();
     
    int count1 = 0;
    for(int i=0;i<r;i+=3) {
        count1 += 3;
        int count2 = 0;
        for(int j=0;j<c;j+=3) {
            count2 += 3;
             vector<int> temp(10, 0);
                for(int ii=i;ii<count1;ii++) {
                   for(int jj=j;jj<count2;jj++) {
                       if(A[ii][jj] == '.') continue;
                       if(temp[A[ii][jj] - '0'])
                           return false;
                       temp[A[ii][jj] -'0'] = 1;
                   }
                }
        }
    }
    return true;
}
public:
    bool isValidSudoku(vector<vector<char>>& A) {
        if(!validateRow(A) || !validateColumn(A) || !validateSquare(A)) return false;
        return true;
    }
};
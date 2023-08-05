// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         int n=matrix.size();
//         int m=matrix[0].size();
//         for(int i=0;i<n;i++){
           
        
      
            
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j]==0){
//                     for(int l=0;l<m;l++){
//                 if(matrix[i][l]!=0){
//                     matrix[i][l]=-9999;
//                 }
//             }
//             }
//             }
//         }
//         for(int i=0;i<n;i++){
           
        
      
            
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j]==0){
//                     for(int l=0;l<m;l++){
//                 if(matrix[l][j]!=0){
//                     matrix[l][j]=-9999;
//                 }
//             }
//             }
//             }
//         }
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j]==-9999){
//                     matrix[i][j]=0;
//                 }
//             }
//         }
//     }
        
    
// };

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    for(int k=0; k<m; k++){
                        if(matrix[i][k] != 0){
                            matrix[i][k] = -9999;
                        }
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    for(int k=0; k<n; k++){
                        if(matrix[k][j] != 0){
                            matrix[k][j] = -9999;
                        }
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == -9999){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
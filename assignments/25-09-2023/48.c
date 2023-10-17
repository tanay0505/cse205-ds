class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      int  n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
               matrix[i][j] = matrix[i][j]^matrix[j][i];
               matrix[j][i]= matrix[i][j]^matrix[j][i];
               matrix[i][j] =matrix[i][j]^matrix[j][i];
            }
        }
        for(int j=0;j<n;j++){
               reverse(matrix[j].begin(),matrix[j].end());
        }
    }
};
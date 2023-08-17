class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //m=matrix[0].size();
        reverse(matrix.begin() , matrix.end());
        int row=matrix.size();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j <= i; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
         
    }
};
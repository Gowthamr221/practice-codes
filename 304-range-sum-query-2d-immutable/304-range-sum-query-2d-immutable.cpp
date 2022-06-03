class NumMatrix {
    vector<vector<int>>prefixSum;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        prefixSum.resize(row+1,vector<int>(col+1));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                //prefixSum[i][j] = matrix[i-1][j-1]+prefixSum[i-1][j]+prefixSum[i][j-1]-prefixSum[i-1][j-1];
                prefixSum[i+1][j+1]=matrix[i][j]+prefixSum[i][j+1]+prefixSum[i+1][j]-prefixSum[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
        int sum = prefixSum[row2+1][col2+1]-prefixSum[row2+1][col1]-prefixSum[row1][col2+1]+prefixSum[row1][col1];
        
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
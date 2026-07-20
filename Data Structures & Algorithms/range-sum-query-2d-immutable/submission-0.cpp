class NumMatrix {

    vector<vector<int>> matrix1;

public:
    NumMatrix(vector<vector<int>>& matrix){

        int rows=matrix.size();
        int columns=matrix[0].size();

        matrix1.resize(rows+1,vector<int>(columns+1,0));
       
        for (int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                matrix1[i+1][j+1]=matrix[i][j]+matrix1[i][j+1]+matrix1[i+1][j]-matrix1[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
       return matrix1[row2+1][col2+1]+matrix1[row1][col1]-matrix1[row2+1][col1]-matrix1[row1][col2+1];

    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */ 
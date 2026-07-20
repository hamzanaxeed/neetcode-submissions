class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        const int rows=9;
        const int columns=9;

        for(int i=0;i<rows;i++){
            
            unordered_set<char> row_Validator;
            unordered_set<char> column_Validator;
            for(int j=0;j<columns;j++){

                // Validating in row
                if(board[i][j]!='.'){
                    if(row_Validator.count(board[i][j])){
                        return false;
                    }else{
                        row_Validator.insert(board[i][j]);
                    }
                }

                //Validating in column
                 if(board[j][i]!='.'){
                    if(column_Validator.count(board[j][i])){
                        return false;
                    }else{
                        column_Validator.insert(board[j][i]);
                    }
                }
            }

           

            
      
        }

         for(int block_Number=0;block_Number<9;block_Number++){
                
            unordered_set<char> block_Validator;
            int start_Row = (block_Number / 3) * 3;
            int start_Column = (block_Number % 3) * 3;

             for(int i = start_Row; i < start_Row + 3; i++){
                for(int j = start_Column; j < start_Column + 3; j++){

                    if(board[i][j]!='.'){
                        if(block_Validator.count(board[i][j])){
                            return false;
                        }else{
                            block_Validator.insert(board[i][j]);
                        }
                    }
                    
                }
            }}

        return true;

    }
};

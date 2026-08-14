class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        const int array_Size = matrix.size();

        for (int i = 0; i < array_Size; i++) {
            for (int j = i + 1; j < array_Size; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0; i < array_Size; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
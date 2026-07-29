class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        // Binary search to find the correct row
        int left = 0;
        int right = rows - 1;
        int row = -1;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            if (target < matrix[mid][0]) {
                right = mid - 1;
            }
            else if (target > matrix[mid][cols - 1]) {
                left = mid + 1;
            }
            else {
                row = mid;
                break;
            }
        }

        if (row == -1)
            return false;

        // Binary search within the found row
        left = 0;
        right = cols - 1;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            if (matrix[row][mid] == target)
                return true;

            if (matrix[row][mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return false;
    }
};
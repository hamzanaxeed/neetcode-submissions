class Solution {
public:
    int bfs(vector<vector<int>> &grid,int i,int j){

        if (i < 0 || i >= grid.size() ||
            j < 0 || j >= grid[0].size() ||
            grid[i][j] == 0) {
            return 1;
        }

        // Already visited
        if (grid[i][j] == -1) {
            return 0;
        }

        // Mark visited
        grid[i][j] = -1;

        int perimeter = 0;

        perimeter += bfs(grid, i - 1, j);
        perimeter += bfs(grid, i + 1, j);
        perimeter += bfs(grid, i, j - 1);
        perimeter += bfs(grid, i, j + 1);

        return perimeter;
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1)return bfs(grid,i,j);
            }
        }

        return 0;
    }
};
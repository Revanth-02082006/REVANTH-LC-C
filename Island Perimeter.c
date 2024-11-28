int islandPerimeter(int** grid, int gridSize, int* gridColSize) {
    int ans = 0;
    int m = gridSize;
    int n = gridColSize[0];
    int newGrid[m+2][n+2];

    // Create new grid with extra border of 0s
    for (int i = 0; i < m + 2; i++) {
        for (int j = 0; j < n + 2; j++) {
            newGrid[i][j] = 0;
        }
    }

    // Copy original grid into newGrid with border
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            newGrid[i + 1][j + 1] = grid[i][j];
        }
    }

    // Calculate perimeter
    for (int row = 1; row <= m; row++) {
        for (int col = 1; col <= n; col++) {
            if (newGrid[row][col] == 1) {
                int temp = 4;
                if (newGrid[row - 1][col] == 1) temp -= 1;
                if (newGrid[row][col - 1] == 1) temp -= 1;
                if (newGrid[row][col + 1] == 1) temp -= 1;
                if (newGrid[row + 1][col] == 1) temp -= 1;

//              OR

//              int temp = 0;
//                if (newGrid[row - 1][col] == 0) temp += 1;
//                if (newGrid[row][col - 1] == 0) temp += 1;
//                if (newGrid[row][col + 1] == 0) temp += 1;
//                if (newGrid[row + 1][col] == 0) temp += 1;

                ans += temp;
            }
        }
    }
    return ans;
}

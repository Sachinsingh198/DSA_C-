#include <bits/stdc++.h>

bool helper(std::vector<std::vector<int>>& grid, int row, int col, int num){

    if(grid[row][col] == grid.size() * grid.size() - 1 ) return true;
    //2 up 1 right
    int i = row - 2;
    int j = col + 1;
    if(i >= 0 and j < grid.size() and grid[i ][j] == num + 1) return helper(grid,i,j, num + 1);

    //2 up 1 left
    i = row  - 2;
    j =col -1;
    if(i >= 0 and j >= 0 and grid[i ][j] == num + 1) return helper(grid,i,j, num + 1);

    //2 down 1 left
    i = row + 2;
    j = col - 1;
    if(i < grid.size() and j >= 0 and grid[i][j] == num + 1) return helper(grid,i,j, num + 1);

    //2 down 1 right
    i = row + 2;
    j = col + 1;
    if(i < grid.size() and j < grid.size() and grid[i][j] == num + 1) return helper(grid, i, j, num + 1);

    //2 Right 1 up
    i = row - 1;
    j = col + 2;
    if(i >= 0 and j < grid.size() and grid[i][j] == num + 1) return helper(grid,i,j, num + 1);

    //2 Right 1 down
    i = row +  1;
    j = col + 2;
    if(i < grid.size() and j < grid.size() and grid[i][j] == num + 1) return helper(grid,i,j, num + 1);

    //2 Left 1 up
    i = row - 1;
    j = col - 2;
    if(i >= 0 and j >= 0 and grid[i][j] == num + 1) return helper(grid, i, j, num + 1);

    //2 Left 1 down
    i = row + 1;
    j = col - 2;
    if(i < grid.size() and j >= 0 and grid[i][j] == num + 1) return helper(grid,i , j, num + 1);
    return false;
}
bool checkValidGrid(std::vector<std::vector<int>>& grid){
    if(grid[0][0] != 0) return false;
    return helper(grid, 0,0,0);
}
int main()
{

    std::vector<std::vector<int>> board = {
        {0, 11, 16, 5, 20},
        {17, 4, 19, 10, 15},
        {12, 1, 8, 21, 6},
        {3, 18, 23, 14, 9},
        {24, 13, 2, 7, 22}
        };
    std::cout<<std::boolalpha<<checkValidGrid(board);
}
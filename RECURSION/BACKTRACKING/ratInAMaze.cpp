
#include <bits/stdc++.h>
// Rat in a maze problems
//  Four direction
void printPath(int i, int j, int m, int n, std::string s, std::vector<std::vector<bool>> &isVisited)
{
    if (i < 0 || j < 0)
        return;
    if (i > m || j > n)
    {
        return;
    }

    // There is no problem in C++ if i will pass the isVisited array by value, but if i will pass it by reference it will create problem, and this problem is arises in Java becaues the parameters in Java get passed by reference not by value.
    if (isVisited[i][j] == true)
        return; // vv important
    if (i == m && j == n)
    {
        std::cout << s << std::endl;
        return;
    }
    isVisited[i][j] = true;
    // go right
    printPath(i, j + 1, m, n, s + "R", isVisited);
    // go down
    printPath(i + 1, j, m, n, s + "D", isVisited);
    // go left
    printPath(i, j - 1, m, n, s + "L", isVisited);
    // go up
    printPath(i - 1, j, m, n, s + "U", isVisited);
    // backtracking
    isVisited[i][j] = false;
}

/*
A maze is a N * N binary matrix of blocks where the upper left block is known as the Source Block, andd the lower rightmost block is known as the Destination Block. If we consider the maze , ther maze[0][0] is the source, and maze[N-1][N-1] is the destination. Our main task is to reach the destination from the source. We have considerd a rat as a characte that can move either foward or downwards.
in the maze matrix, a few dead blocks will be denoted by 0 and active blocks will be denoted by 1. A rat can move only in the active blocks
*/

// for forward and downward;
void printBinary(int i, int j, int m, int n, std::string str, std::vector<std::vector<int>> &deadMaze)
{
    if (i > m || j > n)
        return;

    if (i == m && j == n)
    {
        std::cout << str << std::endl;
        return;
    }
    if (deadMaze[i][j] == 0)
        return;
    printBinary(i + 1, j, m, n, str + "D", deadMaze);
    printBinary(i, j + 1, m, n, str + "R", deadMaze);
}

// For forward , downward, upward and backword
// Space complexity of this code is O(n * n)
void printBinaryBackTrack(int i, int j, int m, int n, std::string str, std::vector<std::vector<int>> &deadMaze, std::vector<std::vector<bool>> &isVisited)
{
    if (i > m || j > n || i < 0 || j < 0)
        return;
    if (isVisited[i][j])
        return;
    if (i == m && j == n)
        return;
    if (deadMaze[i][j] == 0)
        return;
    isVisited[i][j] = true;
    printBinaryBackTrack(i + 1, j, m, n, str + "D", deadMaze, isVisited);
    printBinaryBackTrack(i, j + 1, m, n, str + "R", deadMaze, isVisited);
    printBinaryBackTrack(i - 1, j, m, n, str + "U", deadMaze, isVisited);
    printBinaryBackTrack(i, j - 1, m, n, str + "L", deadMaze, isVisited);
    isVisited[i][j] = false;
}

// Without using an extra array
// Space complexity = O(1)
void printBinaryBackTrackOptimized(int i, int j, int m, int n, std::string str, std::vector<std::vector<int>> &deadMaze)
{
    if (i < 0 || j < 0 || i > m || j > n  )
        return;
    if (i == m && j == n){
        std::cout<<str<<std::endl;
        return;
    }
    if (deadMaze[i][j] == 0)
        return; // Blocked
        if(deadMaze[i][j] == -1) return;
    deadMaze[i][j] = -1;
    printBinaryBackTrackOptimized(i + 1, j, m, n, str + "D", deadMaze);
    printBinaryBackTrackOptimized(i, j + 1, m, n, str + "R", deadMaze);
    printBinaryBackTrackOptimized(i - 1, j, m, n, str + "U", deadMaze);
    printBinaryBackTrackOptimized(i, j - 1, m, n, str + "L", deadMaze);
    deadMaze[i][j] = 1;
}

int main()
{
    int row = 4;
    int col = 6;
    // std::vector<std::vector<bool>> isVisited(row, std::vector<bool>(col));
    // std::cout << sizeof(isVisited) / sizeof(bool) << std::endl;

    // for (const auto &rows : isVisited)
    // {
    //     for (const auto &val : rows)
    //     {
    //         std::cout << std::boolalpha << val << " ";
    //     }
    //     std::cout << std::endl;
    // }
    // printPath(0, 0, row - 1, col - 1, "", isVisited);

    std::vector<std::vector<int>> deadMaze = {
        {1, 0, 1, 1, 1, 1},
        {1, 1, 1, 1, 0, 1},
        {0, 1, 1, 1, 1, 1},
        {0, 0, 1, 0, 1, 1}};
    printBinaryBackTrackOptimized(0, 0, row - 1, col - 1, "", deadMaze);
}
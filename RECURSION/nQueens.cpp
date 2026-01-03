// /*
// given a board of n X n boards, and we have to place n queens such that they will not attack each other
// */
#include <bits/stdc++.h>

bool isSafe(std::vector<std::vector<char>>& board, int row, int col){
    //check the row 
    for(int j = 0; j< board.size();j++){
        if(board[row][j] == 'Q') return false;
    }

    //check the column
    for(int i = 0; i< board.size();i++){
        if(board[i][col] == 'Q') return false;
    }

    //check north east
    int i = row;
    int j = col;
    while(i >= 0 && j < board.size()){
        if(board[i][j] == 'Q') return false;
        i--; j++;
    }
    
    //check noth west
     i = row;
     j = col;
    while(j>=0 and i>=0 ){
        if(board[i][j] == 'Q') return false;
        j--; i--;
    }

    //check south east
    i = row;
    j = col;
    while(j < board.size() and i < board.size()){
        if(board[i][j] == 'Q') return false;
        j++; i++;
    }

    //Check south west
    i = row;
    j = col;
    while(j>= 0 && i < board.size()){
        if(board[i][j] == 'Q') return false;
        j--; i++;
    }
    return true;
}
void printnQueens(std::vector<std::vector<char>> &board, int row)
{
    if(row == board.size()){
        for(int i = 0; i< board.size(); i++){
            for(int j = 0; j<  board.size(); j++){
                std::cout<<board[i][j]<<" ";
            }
            std::cout<<std::endl;
        }
        std::cout<<std::endl;
        return;
    }
    for (int j = 0; j < board.size(); j++)
    {
        if (isSafe(board, row, j))
        {
            board[row][j] = 'Q';
            printnQueens(board,row + 1);
            board[row][j] = 'X'; //backtracking
        }
    }
}
int main()
{
    int n = 4;
    std::vector<std::vector<char>> board= { //5 X 5
        {'X', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X'},
        {'X', 'X', 'X', 'X', 'X'}
    };
    printnQueens(board, 0);
    return 0;
}


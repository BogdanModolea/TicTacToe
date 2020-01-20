#include <bits/stdc++.h>

void show_board(char board[][3])
{
    system("cls");
    std::cout << "Tic Tac Toe Alpha :D\n";
    std::cout << "Use numpad";
    for(int i = 3; i >= 0; i--)
    {
        for(int j = 0; j < 3; j++)
        {
            std::cout << board[i][j] << ' ';
        }
        std::cout << '\n';
    }
}


bool open_position(char board[][3], int x,int y)
{
    return (!board[x][y]);
}

bool win(char board[][3], char piece)
{
    //Check First Line
    if(board[0][0] == piece && board[0][0] == board[0][1] && board[0][1] == board[0][2]) return true;

    //Check Second Line
    if(board[1][0] == piece && board[1][0] == board[1][1] && board[1][1] == board[1][2]) return true;

    //Check Third Line
    if(board[2][0] == piece && board[2][0] == board[2][1] && board[2][1] == board[2][2]) return true;

    //Check First Column
    if(board[0][0] == piece && board[0][0] == board[1][0] && board[1][0] == board[2][0]) return true;

    //Check Second Column
    if(board[0][1] == piece && board[0][1] == board[1][1] && board[1][1] == board[2][1]) return true;

    //Check Third Column
    if(board[0][2] == piece && board[0][2] == board[1][2] && board[1][2] == board[2][2]) return true;

    //Check Positively Sloped Diagonals
    if(board[0][0] == piece && board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true;

    //Check Negatively Sloped Diagonals
    if(board[0][2] == piece && board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true;

    return false;
}

bool is_full(char board[][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(!board[i][j]) return false;
        }
    }
    return true;
}

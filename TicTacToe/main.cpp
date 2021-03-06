#include <bits/stdc++.h>
#include <windows.h>
#include "rules.h"
using namespace std;

int player;

char board[3][3];

int turn, piece;

char player1, player2;

bool game_over = false;

int winner[89];

int close = 1;

int main()
{
    cout << "Player 1 please choise your character (X/O): "; cin >> player1;
    if(player1 == 'X') player2 = 'O';
    else player2 = 'X';
    winner[player1]=1;
    winner[player2]=2;
    //turn = rand()%2;
    turn = 1;
    while(!game_over)
    {
        show_board(board);
        if(turn == 0)
        {
            cout << "Player 1 please make your choise: "; cin>>piece;
            switch(piece){
                case 1:
                    if(open_position(board,0,0)){
                        board[0][0] = 'X';
                    }
                    else turn--;
                    break;
                case 2:
                    if(open_position(board,0,1)){
                        board[0][1] = 'X';
                    }
                    else turn--;
                    break;
                case 3:
                    if(open_position(board,0,2)){
                        board[0][2] = 'X';
                    }
                    else turn--;
                    break;
                case 4:
                    if(open_position(board,1,0)){
                        board[1][0] = 'X';
                    }
                    else turn--;
                    break;
                case 5:
                    if(open_position(board,1,1)){
                        board[1][1] = 'X';
                    }
                    else turn--;
                    break;
                case 6:
                    if(open_position(board,1,2)){
                        board[1][2] = 'X';
                    }
                    else turn--;
                    break;
                case 7:
                    if(open_position(board,2,0)){
                        board[2][0] = 'X';
                    }
                    else turn--;
                    break;
                case 8:
                    if(open_position(board,2,1)){
                        board[2][1] = 'X';
                    }
                    else turn--;
                    break;
                case 9:
                    if(open_position(board,2,2)){
                        board[2][2] = 'X';
                    }
                    else turn--;
                    break;
            }
        }
        else{
            cout << "Player 2 please make your choise: "; cin>>piece;
            switch(piece){
                case 1:
                    if(open_position(board,0,0)){
                        board[0][0] = 'O';
                    }
                    else turn--;
                    break;
                case 2:
                    if(open_position(board,0,1)){
                        board[0][1] = 'O';
                    }
                    else turn--;
                    break;
                case 3:
                    if(open_position(board,0,2)){
                        board[0][2] = 'O';
                    }
                    else turn--;
                    break;
                case 4:
                    if(open_position(board,1,0)){
                        board[1][0] = 'O';
                    }
                    else turn--;
                    break;
                case 5:
                    if(open_position(board,1,1)){
                        board[1][1] = 'O';
                    }
                    else turn--;
                    break;
                case 6:
                    if(open_position(board,1,2)){
                        board[1][2] = 'O';
                    }
                    else turn--;
                    break;
                case 7:
                    if(open_position(board,2,0)){
                        board[2][0] = 'O';
                    }
                    else turn--;
                    break;
                case 8:
                    if(open_position(board,2,1)){
                        board[2][1] = 'O';
                    }
                    else turn--;
                    break;
                case 9:
                    if(open_position(board,2,2)){
                        board[2][2] = 'O';
                    }
                    else turn--;
                    break;
            }
        }
        if(win(board,'X')){
            show_board(board);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),224);
            cout << "PLAYER "<< winner['X'] << " WINS!!!\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            cout << "Press 0 to close\n\n";
            cin >> close;
            game_over = true;
        }

        else if(win(board,'O')){
            show_board(board);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),224);
            cout << "PLAYER "<< winner['O'] << " WINS!!!\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            cout << "Press 0 to close\n\n";
            cin >> close;
            game_over = true;
        }

        else {
            if(is_full(board)){
                show_board(board);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),224);
                cout << "It's a tie!\n";
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
                cout << "Press 0 to close\n\n";
                cin >> close;
                game_over = true;
            }
        }

        turn++;
        turn %= 2;
    }
    if(!close) return 0;
}

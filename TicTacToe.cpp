#include <iostream>
using namespace std;

int main()
{
    //welcoming message and determing player settings
    char player1;
    char player2;

    std::cout << "Welcome to Tic Tac Toe!" << std::endl;;
    std::cout << std::endl;
    std::cout << "Player 1, Would you like to play as X or O? Enter here: ";
    cin >> player1;
    while(player1 != 'o' && player1 != 'O' && player1 != 'x' && player1 != 'X')
    {
        std::cout << "Invalid input, please enter o, O, x, or X!" << std::endl;
        std::cout << "Enter here: ";
        cin >> player1;
    }
    std::cout << std::endl;

    //if player 1 chooses X, player 2 will automatically be O and vice versa
    if(player1 == 'o' || player1 == 'O')
    {
        player2 = 'X';
    }
    else
    {
        player2 = 'O';
    }

    //initializing game to false (meaning no winner determined yet)
    bool gameStatus = false;

    //initialize the 3x3 board
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

    //print board
    std::cout << "This is the Tic-Tac-Toe Board" << std::endl;
    std::cout << " " << board[0][0] << " " << " | " << " " << board[0][1] << " " << " | " << " " << board[0][2] << std::endl;
    std::cout << "---" << "---" << "---" << "---" << "---" << std::endl;
    std::cout << " " << board[1][0] << " " << " | " << " " << board[1][1] << " " << " | " << " " << board[1][2] << std::endl;
    std::cout << "---" << "---" << "---" << "---" << "---" << std::endl;
    std::cout << " " << board[2][0] << " " << " | " << " " << board[2][1] << " " << " | " << " " << board[2][2] << std::endl;

    return 0;


}


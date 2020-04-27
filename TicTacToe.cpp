#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

//initializing game to false (meaning no winner determined yet)
//hellosafdfsdf

bool gameStatus = false;

int currPlayer = 1;

//initialize the 3x3 board
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

void printBoard()
{
    //print board
    std::cout << "This is the Tic-Tac-Toe Board" << std::endl;
    std::cout << " " << board[0][0] << " " << " | " << " " << board[0][1] << " " << " | " << " " << board[0][2] << std::endl;
    std::cout << "---" << "---" << "---" << "---" << "---" << std::endl;
    std::cout << " " << board[1][0] << " " << " | " << " " << board[1][1] << " " << " | " << " " << board[1][2] << std::endl;
    std::cout << "---" << "---" << "---" << "---" << "---" << std::endl;
    std::cout << " " << board[2][0] << " " << " | " << " " << board[2][1] << " " << " | " << " " << board[2][2] << std::endl;
    std::cout << std::endl;
}

void checkGameStatus()
{
    if(board[0][0] == board[0][1] && board[0][1] == board[0][2])
    {
        gameStatus = true;
    }
}

int main()
{
    //welcoming message and determing player settings
    char player1;
    char player2;

    std::cout << "Welcome to Tic Tac Toe!" << std::endl;;
    std::cout << std::endl;
    std::cout << "Player 1, Would you like to play as X or O? Enter here: ";
    cin >> player1;
    if(player1 == 'x')
    {
        player1 = 'X';
    }
    if(player1 == 'o')
    {
        player1 = 'O';
    }
    while(player1 != 'o' && player1 != 'O' && player1 != 'x' && player1 != 'X')
    {
        std::cout << "Invalid input, please enter o, O, x, or X!" << std::endl;
        std::cout << "Enter here: ";
        std::cin >> player1;
        if(player1 == 'x')
        {
            player1 = 'X';
        }
        else
        {
            player1 = 'O';
        }
    }

    //if player 1 chooses O, player 2 will automatically be X and vice versa
    if(player1 == 'o' || player1 == 'O')
    {
        player2 = 'X';
    }
    else
    {
        player2 = 'O';
    }

    while(gameStatus != true)
    {
        int p1selection, p2selection;
        bool taken = false;

        //to keep track of all numbers entered by players
        vector<int> list;

        std::cout << "Player " << currPlayer << ", please select a number from 1-9 to place your icon on the board." << std::endl;
        std::cout << "Enter here: ";
        std::cin >> p1selection;

        //check if number selection is in array, if not add, if so ask player to enter new number that's not taken
        for (std::vector<int>::iterator it = list.begin(); it !=list.end(); it++)
        {
            if(*it == p1selection)
            {
                taken = true;
            }
        }

        while(taken == true)
        { 
            std::cout << "Please enter a new number; it has already been chosen!" << std::endl;
            std::cout << "Enter here: ";
            std::cin >> p1selection;
            std::cout << std::endl;
            taken = false;
        }

        //player1 logic
        if(currPlayer == 1)
        {
            if(player1 == 'X' && p1selection == 1)
            {
                board[0][0] = 'X';
            }
            else if(player1 == 'O' && p1selection == 1)
            {
                board[0][0] = 'O';
            }
            else if(player1 == 'X' && p1selection == 2)
            {
                board[0][1] = 'X';
            }
            else if(player1 == 'O' && p1selection == 2)
            {
                board[0][1] = 'O';
            }
            else if(player1 == 'X' && p1selection == 3)
            {
                board[0][2] = 'X';
            }
            else if(player1 == 'O' && p1selection == 3)
            {
                board[0][2] = 'O';
            }
            else if(player1 == 'X' && p1selection == 4)
            {
                board[1][0] = 'X';
            }
            else if(player1 == 'O' && p1selection == 4)
            {
                board[1][0] = 'O';
            }
            else if(player1 == 'X' && p1selection == 5)
            {
                board[1][1] = 'X';
            }
            else if(player1 == 'O' && p1selection == 5)
            {
                board[1][1] = 'O';
            }
            else if(player1 == 'X' && p1selection == 6)
            {
                board[1][2] = 'X';
            }
            else if(player1 == 'O' && p1selection == 6)
            {
                board[1][2] = 'O';
            }
            else if(player1 == 'X' && p1selection == 7)
            {
                board[2][0] = 'X';
            }
            else if(player1 == 'O' && p1selection == 7)
            {
                board[2][0] = 'O';
            }
            else if(player1 == 'X' && p1selection == 8)
            {
                board[2][1] = 'X';
            }
            else if(player1 == 'O' && p1selection == 8)
            {
                board[2][1] = 'O';
            }
            else if(player1 == 'X' && p1selection == 9)
            {
                board[2][2] = 'X';
            }
            else if(player1 == 'O' && p1selection == 9)
            {
                board[2][2] = 'O';
            }
        }
        else
        {
            //player2 logic
            if(player2 == 'X' && p1selection == 1)
            {
                board[0][0] = 'X';
            }
            else if(player2 == 'O' && p1selection == 1)
            {
                board[0][0] = 'O';
            }
            else if(player2 == 'X' && p1selection == 2)
            {
                board[0][1] = 'X';
            }
            else if(player2 == 'O' && p1selection == 2)
            {
                board[0][1] = 'O';
            }
            else if(player2 == 'X' && p1selection == 3)
            {
                board[0][2] = 'X';
            }
            else if(player2 == 'O' && p1selection == 3)
            {
                board[0][2] = 'O';
            }
            else if(player2 == 'X' && p1selection == 4)
            {
                board[1][0] = 'X';
            }
            else if(player2 == 'O' && p1selection == 4)
            {
                board[1][0] = 'O';
            }
            else if(player2 == 'X' && p1selection == 5)
            {
                board[1][1] = 'X';
            }
            else if(player2 == 'O' && p1selection == 5)
            {
                board[1][1] = 'O';
            }
            else if(player2 == 'X' && p1selection == 6)
            {
                board[1][2] = 'X';
            }
            else if(player2 == 'O' && p1selection == 6)
            {
                board[1][2] = 'O';
            }
            else if(player2 == 'X' && p1selection == 7)
            {
                board[2][0] = 'X';
            }
            else if(player2 == 'O' && p1selection == 7)
            {
                board[2][0] = 'O';
            }
            else if(player2 == 'X' && p1selection == 8)
            {
                board[2][1] = 'X';
            }
            else if(player2 == 'O' && p1selection == 8)
            {
                board[2][1] = 'O';
            }
            else if(player2 == 'X' && p1selection == 9)
            {
                board[2][2] = 'X';
            }
            else if(player2 == 'O' && p1selection == 9)
            {
                board[2][2] = 'O';
            }
        }
            
        printBoard();
        checkGameStatus();

        //switching player
        if(currPlayer == 1)
        {
            currPlayer = 2;
        }
        else
        {
            currPlayer = 1;
        }
    }


    return 0;


}


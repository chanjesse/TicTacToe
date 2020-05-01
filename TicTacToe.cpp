#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

//initializing game to false (meaning no winner determined yet
bool gameStatus = false;
bool drawStatus = false;

//setting current player initially to 1
int currPlayer = 1;

//to keep track of all numbers entered by players
vector<int> list;

//initialize the 3x3 board
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

void printBoard()
{
    //print board
    std::cout << "This is the Tic-Tac-Toe Board" << std::endl;
    std::cout << " " << board[0][0] << " "
              << " | "
              << " " << board[0][1] << " "
              << " | "
              << " " << board[0][2] << std::endl;
    std::cout << "---"
              << "---"
              << "---"
              << "---"
              << "---" << std::endl;
    std::cout << " " << board[1][0] << " "
              << " | "
              << " " << board[1][1] << " "
              << " | "
              << " " << board[1][2] << std::endl;
    std::cout << "---"
              << "---"
              << "---"
              << "---"
              << "---" << std::endl;
    std::cout << " " << board[2][0] << " "
              << " | "
              << " " << board[2][1] << " "
              << " | "
              << " " << board[2][2] << std::endl;
    std::cout << std::endl;
}

//function to check if a winner is determined
void checkGameStatus(bool &gameStatus)
{
    if (board[0][0] == board[0][1] && board[0][1] == board[0][2])
    {
        gameStatus = true;
    }
    else if (board[1][0] == board[1][1] && board[1][1] == board[1][2])
    {
        gameStatus = true;
    }
    else if (board[2][0] == board[2][1] && board[2][1] == board[2][2])
    {
        gameStatus = true;
    }
    else if (board[0][0] == board[1][0] && board[1][0] == board[2][0])
    {
        gameStatus = true;
    }
    else if (board[0][1] == board[1][1] && board[1][1] == board[2][1])
    {
        gameStatus = true;
    }
    else if (board[0][2] == board[1][2] && board[1][2] == board[2][2])
    {
        gameStatus = true;
    }
    else if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
        gameStatus = true;
    }
    else if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        gameStatus = true;
    }
    else if (std::find(list.begin(), list.end(), 1) != list.end() && std::find(list.begin(), list.end(), 2) != list.end() && std::find(list.begin(), list.end(), 3) != list.end() && std::find(list.begin(), list.end(), 4) != list.end() && std::find(list.begin(), list.end(), 5) != list.end() && std::find(list.begin(), list.end(), 6) != list.end() && std::find(list.begin(), list.end(), 7) != list.end() && std::find(list.begin(), list.end(), 8) != list.end() && std::find(list.begin(), list.end(), 9) != list.end())
    {
        gameStatus = true;
        drawStatus = true;
    }
}

int main()
{
    //welcoming message and determing player settings
    char player1;
    char player2;

    std::cout << "Welcome to Tic Tac Toe!" << std::endl;
    ;
    std::cout << std::endl;
    std::cout << "Player 1, Would you like to play as X or O? Enter here: ";
    cin >> player1;
    if (player1 == 'x')
    {
        player1 = 'X';
    }
    if (player1 == 'o')
    {
        player1 = 'O';
    }
    while (player1 != 'o' && player1 != 'O' && player1 != 'x' && player1 != 'X')
    {
        std::cout << "Invalid input, please enter o, O, x, or X!" << std::endl;
        std::cout << "Enter here: ";
        std::cin >> player1;
        if (player1 == 'x')
        {
            player1 = 'X';
        }
        else
        {
            player1 = 'O';
        }
    }

    //if player 1 chooses O, player 2 will automatically be X and vice versa
    if (player1 == 'o' || player1 == 'O')
    {
        player2 = 'X';
    }
    else
    {
        player2 = 'O';
    }

    while (gameStatus != true)
    {
        int selection;
        bool taken = false;

        std::cout << "Player " << currPlayer << ", please select a number from 1-9 to place your icon on the board." << std::endl;
        std::cout << "Enter here: ";
        std::cin >> selection;

        //check if number selection is in array, if not add, if so ask player to enter new number that's not taken
        if (std::find(list.begin(), list.end(), selection) != list.end())
        {
            //if found taken will be true
            taken = true;
        }
        else
        {
            //adding selection to vector list to keep track of taken numbers
            list.push_back(selection);
        }

        while (taken == true)
        {
            std::cout << "Please enter a new number; it has already been chosen!" << std::endl;
            std::cout << "Enter here: ";
            std::cin >> selection;
            std::cout << std::endl;
            if (std::find(list.begin(), list.end(), selection) != list.end())
            {
                taken = true;
            }
            else
            {
                taken = false;

                //adding selection to vector list to keep track of taken numbers
                list.push_back(selection);
            }
        }

        //player1 logic
        if (currPlayer == 1)
        {
            if (player1 == 'X' && selection == 1)
            {
                board[0][0] = 'X';
            }
            else if (player1 == 'O' && selection == 1)
            {
                board[0][0] = 'O';
            }
            else if (player1 == 'X' && selection == 2)
            {
                board[0][1] = 'X';
            }
            else if (player1 == 'O' && selection == 2)
            {
                board[0][1] = 'O';
            }
            else if (player1 == 'X' && selection == 3)
            {
                board[0][2] = 'X';
            }
            else if (player1 == 'O' && selection == 3)
            {
                board[0][2] = 'O';
            }
            else if (player1 == 'X' && selection == 4)
            {
                board[1][0] = 'X';
            }
            else if (player1 == 'O' && selection == 4)
            {
                board[1][0] = 'O';
            }
            else if (player1 == 'X' && selection == 5)
            {
                board[1][1] = 'X';
            }
            else if (player1 == 'O' && selection == 5)
            {
                board[1][1] = 'O';
            }
            else if (player1 == 'X' && selection == 6)
            {
                board[1][2] = 'X';
            }
            else if (player1 == 'O' && selection == 6)
            {
                board[1][2] = 'O';
            }
            else if (player1 == 'X' && selection == 7)
            {
                board[2][0] = 'X';
            }
            else if (player1 == 'O' && selection == 7)
            {
                board[2][0] = 'O';
            }
            else if (player1 == 'X' && selection == 8)
            {
                board[2][1] = 'X';
            }
            else if (player1 == 'O' && selection == 8)
            {
                board[2][1] = 'O';
            }
            else if (player1 == 'X' && selection == 9)
            {
                board[2][2] = 'X';
            }
            else if (player1 == 'O' && selection == 9)
            {
                board[2][2] = 'O';
            }
        }
        else
        {
            //player2 logic
            if (player2 == 'X' && selection == 1)
            {
                board[0][0] = 'X';
            }
            else if (player2 == 'O' && selection == 1)
            {
                board[0][0] = 'O';
            }
            else if (player2 == 'X' && selection == 2)
            {
                board[0][1] = 'X';
            }
            else if (player2 == 'O' && selection == 2)
            {
                board[0][1] = 'O';
            }
            else if (player2 == 'X' && selection == 3)
            {
                board[0][2] = 'X';
            }
            else if (player2 == 'O' && selection == 3)
            {
                board[0][2] = 'O';
            }
            else if (player2 == 'X' && selection == 4)
            {
                board[1][0] = 'X';
            }
            else if (player2 == 'O' && selection == 4)
            {
                board[1][0] = 'O';
            }
            else if (player2 == 'X' && selection == 5)
            {
                board[1][1] = 'X';
            }
            else if (player2 == 'O' && selection == 5)
            {
                board[1][1] = 'O';
            }
            else if (player2 == 'X' && selection == 6)
            {
                board[1][2] = 'X';
            }
            else if (player2 == 'O' && selection == 6)
            {
                board[1][2] = 'O';
            }
            else if (player2 == 'X' && selection == 7)
            {
                board[2][0] = 'X';
            }
            else if (player2 == 'O' && selection == 7)
            {
                board[2][0] = 'O';
            }
            else if (player2 == 'X' && selection == 8)
            {
                board[2][1] = 'X';
            }
            else if (player2 == 'O' && selection == 8)
            {
                board[2][1] = 'O';
            }
            else if (player2 == 'X' && selection == 9)
            {
                board[2][2] = 'X';
            }
            else if (player2 == 'O' && selection == 9)
            {
                board[2][2] = 'O';
            }
        }

        printBoard();
        checkGameStatus(gameStatus);


        //switching player
        if (currPlayer == 1)
        {
            currPlayer = 2;
        }
        else
        {
            currPlayer = 1;
        }
    }

    //switching player again
    if (currPlayer == 1)
    {
        currPlayer = 2;
    }
    else
    {
        currPlayer = 1;
    }

    //winner or draw message
    if (drawStatus == true)
    {
        std::cout << "The game has ended in a draw!" << std::endl;
    }
    else
    {
        std::cout << "Congratulations! Player " << currPlayer << " has won!" << std::endl;
    }

    //clearing vector
    list.clear();

    return 0;
}

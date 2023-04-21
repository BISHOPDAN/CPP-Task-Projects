#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;
    while(true)
    {
    player = getUserChoice();
    cout << "Your Choice is ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "Computer Choice is ";
    showChoice(computer);

    chooseWinner(player, computer);
    }
    return 0;
}


char getUserChoice()
{
    char player;
    cout << "\n";
    cout << "Rock-Paper-Scissors Game\n";
    do
    {
        cout << "************************\n";
        cout <<  " Choose the following\n";
        cout << "************************\n";
        cout << "'r' is for Rock\n";
        cout << "'p' is for Paper\n";
        cout << "'s' is for Scissors\n";
        cin >> player;
    }
    while (player != 'r' && player != 'p' && player != 's');

    return player;
}
char getComputerChoice()
{
    srand(time(0));

    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
    }

    return 0;
}
void showChoice(char choice)
{
    switch (choice)
    {
    case 'r': cout << "Rock\n";
        break;
    case 'p': cout << "Paper\n";
        break;
    case 's': cout << "scissors\n";
        break;
    
    default: cout << "Not valid input\n";
        break;
    }
}
void chooseWinner(char player, char computer)
{
    switch (player)
    {
    case 'r': if (computer == 'r')
                {
                    cout << "it is a tie!" << endl;
                }
                else if (computer == 'p')
                {
                    cout << "You lose!" << endl;
                }
                else
                {
                    cout << "You win!" << endl;
                }
                break;
    case 'p': if (computer == 'r')
                {
                    cout << "You win!" << endl;
                }
                else if (computer == 'p')
                {
                    cout << "It is a tie!" << endl;
                }
                else
                {
                    cout << "You lose!" << endl;
                }
                break;
    case 's': if (computer == 'r')
                {
                    cout << "You lose!" << endl;
                }
                else if (computer == 'p')
                {
                    cout << "You win!" << endl;
                }
                else
                {
                    cout << "It is a tie!" << endl;
                }
                break;
    default: cout << "It is not a valid input" << endl;
    }
}
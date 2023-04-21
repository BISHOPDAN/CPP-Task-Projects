#include <iostream>
#include <ctime>
using namespace std;


void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'x';
    char computer = 'o';
    bool running = true;

    drawBoard(spaces);

    while(running){
        playerMove(spaces, player);
    }

    return 0;
}

void drawBoard(char *spaces){
    cout << '\n';
    cout << "   |    |    " << '\n';
    cout << " " << spaces[0] << "  | " << spaces[1] << "  |   "  << spaces[2] << "  " << '\n';
    cout << "___|____|___" << '\n';
    cout << "   |    |    " << '\n';
    cout << " " << spaces[3] << "  |   " << spaces[4] << "  |   "  << spaces[5] << "  " << '\n';
    cout << "___|____|____" << '\n';
    cout << "   |    |    " << '\n';
    cout << " " << spaces[3] << "  |   " << spaces[4] << "  |   "  << spaces[5] << "  " << '\n';
    cout << "   |    |    " << '\n';
    cout << '\n';
}
void playerMove(char *spaces, char player){

}
void computerMove(char *spaces, char computer){

}
bool checkWinner(char *spaces, char player, char computer){
    return 0;
}
bool checkTie(char *spaces){
    return 0;
}
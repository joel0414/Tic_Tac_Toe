#include <iostream>
#include <iomanip>
#include <unistd.h>
using std::cout;
using std::endl;
using std::setw;
using std::setfill;
using std::string;
using std::cin;
char table[9] = {'1','2','3','4','5','6','7','8','9'};

void board(){
    system("clear");
    cout << "\t\t\tTic - Tac -Toe Game" << endl;
    cout << "\t\t\tPlayer 1(X) -- Player 2(O)" << endl;
    char width = 6;
    cout << setw(width) << "|" << setw(width)<< "|"<< endl;
    cout << table[0] << setw(width-1) << "|"<< setw(width/2)<<table [1] << setw(width/2) << "|" <<setw(width/2) << table [2]<<endl;
    cout << string(width-1,'_') << "|" << string(width-1,'_') << "|" <<string(width-1,'_') <<"" << endl;
    cout << table[3] << setw(width-1) << "|"<<setw(width/2)<<table [4] << setw(width/2) << "|" <<setw(width/2) << table [5]<<endl;
    cout << string(width-1,'_') << "|" << string(width-1,'_') << "|" <<string(width-1,'_') <<"" << endl;
    cout << table[6] << setw(width-1) << "|"<<setw(width/2)<<table [7] << setw(width/2) << "|" <<setw(width/2) << table [8]<<endl;
    cout << string(width-1,'_') << "|" << string(width-1,'_') << "|" <<string(width-1,'_') <<"" << endl;
    cout << setw(width) << "|" << setw(width)<< "|"<< endl;
}
bool CheckWin(){
    if (table[0] == table[1] && table[1] == table[2]){
        return true;
    }
}
int main() {

    char player = 'X';
    int player_number;
    int position;
    int turn ;
    for (turn = 0; turn <  9 ; turn++) {
        //Displays Board
        board();
        while(true){
            // Sets the player number to either 1 or 2
            player_number = (player == 'X') ? 1 :2;

            // Prompt to Receive the position where the player wants their mark
            cout << "Player " << player_number << " enter the number : ";
            cin >> position;

            // Check if the input is a valid input as well if the position has been taken already
            if( table[position -1] == 'X'|| table[position -1] == 'O' || position < 0 || position > 9){
                cout << "Invalid move. Try Again :( " << endl;
                sleep(1);
            }
            else{
                break;
            }
        }
        CheckWin();
        table[position -1] = player;

        // Switches the players
        player = (player == 'X') ? 'O': 'X';

    }


}

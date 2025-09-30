
#include <iostream>
#include <string>
#include <cstdlib>  
#include <ctime>
using namespace std;

int main()
{
    while (true)
    {

        string player1, player2;
        cout << "\n\nPlayer1, chose rock, paper or scissors: ";
        cin >> player1;

        srand(time(0)); //seeding RNG 

        int choice = rand() % 3;
        if (choice == 0) {
            player2 = "rock";
        }
        else if (choice == 1) {
            player2 = "scissors";

        }
        else {
            player2 = "paper";
        }
        cout << "Player2 choses: " << player2 << endl;

        if (player1 == player2) {
            cout << "It is a tie";
        }
        else if (
            (player1 == "rock" && player2 == "scissors")
            || 
            (player1 == "scissors" && player2 == "paper") 
            || 
            (player1 == "paper" && player2 == "rock")) 
        {
            cout << "Player1 wins ";

        }
        else {
            cout << "Player2 wins";
        }

    }
    return 0;

}


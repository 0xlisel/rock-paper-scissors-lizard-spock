/* 
Rock, Paper, Scissors, Lizard, Spock
(The Big Bang Theory)
*/

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    srand(time(NULL));

    // random choice for the computer
    int computer = rand() % 3 + 1;

    // user's choice
    int user = 0;

    // user prompts
    cout << "================================" << endl;
    cout << "Rock Paper Scissors Lizard Spock" << endl;
    cout << "================================" << endl;

    cout << "[1] Rock ✊" << endl;
    cout << "[2] Paper ✋" << endl;
    cout << "[3] Scissors ✌️" << endl;
    cout << "[4] Lizard 🤏" << endl;
    cout << "[5] Spock 🖖" << endl;

    cout << "Enter (1, 2, 3, 4 or 5) to pick.." << endl;
    // cout << "Computer " << computer << endl;

    cin >> user;

    // logic
    if (user == computer)
    {
        cout << "Oof! That's a tie :(" << endl;
    } 
    else if (user == 1 && computer == 4)
    {
        cout << "User wins" << endl;
    }
    else if (user == 1 && computer == 3)
    {
        cout << "User wins" << endl;
    }
    else if (user == 2 && computer == 1)
    {
        cout << "User wins" << endl;
    }
    else if (user == 2 && computer == 5)
    {
        cout << "User wins" << endl;
    }
    else if (user == 3 && computer == 2)
    {
        cout << "User wins" << endl;
    }
    else if (user == 3 && computer == 4)
    {
        cout << "User wins" << endl;
    }
    else if (user == 4 && computer == 5)
    {
        cout << "User wins" << endl;
    }
    else if (user == 4 && computer == 2)
    {
        cout << "User wins" << endl;
    }
    else if (user == 5 && computer == 3)
    {
        cout << "User wins" << endl;
    }
    else if (user == 5 && computer == 1)
    {
        cout << "User wins" << endl;
    }
    else {
        cout << "Computer wins" << endl;
    } 

    return 0;
}

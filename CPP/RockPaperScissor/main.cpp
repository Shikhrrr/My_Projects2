#include <iostream>
#include <ctime>
#include <cstring>
using namespace std;

int main(void)
{
    srand((unsigned) time(NULL));

    int t;
    char start;
    int t1 = 0;
    cout << "Enter number of rounds - ";
    cin >> t;
    int comp_score = 0, user_score = 0;

    cout << "-------------GAME STARTS-------------" << endl;
    while (t1++ < t)
    {
        cin >> start;
        cout << "Usage - R, P, S" << endl;
        int comp = (rand() % 3) + 1;
        char comp_move;
        char user_move;

        //defining computer's moves
        if (comp == 1) {
            comp_move = 'r';
        }

        else if (comp == 2) {
            comp_move = 'p';
        }

        else if (comp == 3) {
            comp_move = 's';
        }

        cout << "The computer chose *****" << endl;
        
        //user moves
        cout << "Your Turn - " << comp_move;
        cin >> user_move;
        
        if ((tolower(user_move) == 'r' && comp_move == 'p') || (user_move == 'p' && comp_move == 'r') || (user_move == 's' && comp_move == 'p'))
        {
            user_score++;
            cout << "You Won!" << endl;
            cout << "Computer chose " << comp_move << " and you chose " << user_move << endl;
        }

        else if ((comp_move == 'p' && user_move == 'r') || (comp_move == 'r' && user_move == 'p') || (comp_move == 's' && user_move == 'p'))
        {
            comp_score++;
            cout << "Computer Won!" << endl;
            cout << "Computer chose " << comp_move << " and you chose " << user_move << endl;
        }

        else
        {
            cout << "Draw!" << endl;
            cout << "You and computer both chose " << user_move << endl;
        }

        cout << "Score: You - " << user_score << " Computer - " << comp_score << endl;
        cout << "Next Round? y/n ";
        char next_round;
        cin >> next_round;
        
        if (next_round == 'y')
        {
            continue;
        }
        else 
        {
            break;
            cout << "Exited" << endl;
        }
    }

    //final score
    if (user_score > comp_score)
    {
        cout << "You WON!" << endl;
    }

    else if (user_score < comp_score)
    {
        cout << "Computer WON!" << endl;
    }

    else{
        cout << "DRAW!" << endl;
    }
}
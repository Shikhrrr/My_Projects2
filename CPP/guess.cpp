#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void chances(int *chance); //function to define whose chance is it

int main(void)
{
    srand((unsigned) time(NULL));

    int diff;
    int random;
    int c = 1;
    int *chance = &c;
    
    string name1;
    string name2;

    //player names
    cout << "Enter player 1: ";
    cin >> name1;
    
    cout << "Enter player 2: ";
    cin >> name2;
    cout << endl;

    //difficulty
    cout << "Select Difficulty"<<endl;
    cout << "1 --> Ranges between 1 to 10" << endl
    << "2 --> Ranges between 10 to 100" << endl
    << "3 --> Ranges between 100 to 1000" << endl
    << "4 --> Ranges between 1000 to 10000" << endl;

    // switch (diff) 
    // {
    //     case 1:
    //         random = (rand() % 10) + 1;

    //     case 2:
    //         random = (rand() % 100) + 1;

    //     case 3:
    //         random = (rand() % 1000) + 1;

    //     case 4: 
    //         random = (rand() % 10000) + 1;

    //     default:
    //         random = 0;
    // }

    int t = 0;
    do 
    {
        cin >> diff;
        if (diff == 1)
        {
            random = (rand() % 10) + 1;
            t = 0;
        }

        else if (diff == 2)
        {
            random = (rand() % 100) + 1;
            t = 0;
        }

        else if (diff == 3)
        {
            random = (rand() % 1000) + 1;
            t = 0;
        }

        else if (diff == 4)
        {
            random = (rand() % 10000) + 1;
            t = 0;
        }

        else
        {
            cout << "usage: choose 1,2,3 or 4" << endl;
            t = 1;
        }
    }
    while (t != 0);

    //main algo
    while (true)
    {
        int guess;
        cout << "Enter number: ";
        cin >> guess;

        if (guess > random)
        {
            cout << "The answer is LESSER than the given number" << endl;
        }

        else if (guess < random)
        {
            cout << "The answer is GREATER than the given number" << endl;
        }

        else if (guess == random)
        {
            cout << endl << "Correct Answer!" << endl;
            break;
        }

        chances(&c);
    }
    
    if (c == 1)
    {
        cout << name1 <<" wins" << endl;
    }

    else if (c == 2)
    {
        cout << name2 << " wins" << endl;
    }

    else 
    {
        cout << "internal error" << endl;
    }
}

void chances(int *chance)
{
    if (*chance == 1)
    {
        *chance = 2;
    }

    else if(*chance == 0)
    {
        *chance = 1;
    }
}
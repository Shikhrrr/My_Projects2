#include <iostream>
#include <string>
using namespace std;

int check(string uid);

int main(void)
{
    int t;
    cin >> t;
    while (t > 0)
    {
        t--;
        string uid;
        cin >> uid;

        int ans = check(uid);   

        // cout << ans << endl;

        if (ans == 1)
        {
            cout << "Invalid" << endl;;
        }

        else if (ans == 0)
        {
            cout << "Valid" << endl;
        }
    }

}

int check(string uid)
{
    int valid = 1;
    int len = uid.length();

    //check length
    if (len != 10)
    {
        valid = 0;
        return 1;
    }

    //check repitition
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (uid[i] == uid[j])
            {
                valid = 0;
                return 1;
            }
        }
    }

    //digit counter

    int digits = 0;
    for (int i = 0; i < len; i++)
    {
        if (uid[i] >= 48 && uid[i] <= 57)
        {
            digits++;
        }
    }

    if (digits < 3)
    {
        valid = 0;
        return 1;
    }

    //uppercase letters

    int upper = 0;
    for (int i = 0; i < len; i++)
    {
        if (uid[i] >= 65 && uid[i] <= 90)
        {
            upper++;
        }
    }
    if (upper < 2)
    {
        valid = 0;
        return 1;
    }

    //check alphanumeric characters 
    for (int i = 0; i < len; i++)
    {
        if (!((uid[i] >= 65 && uid[i] <= 90) || (uid[i] >= 97 && uid[i] <= 122) || (uid[i] >= 48 && uid[i] <= 57)))
        {
            valid = 0;
            return 1;
        }
    }

    return 0;
}
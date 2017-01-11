#include <iostream>
using namespace std;


double calulator ()
{
    double a,b;
    char op;
    double result;

    for (int i = 0; i < 30; i++)
        cout << endl;

    cout << "Welcome to the game!" << endl;

    cout << "Player One enter an integer." << endl;
    cin >> a;

    cout << "Player Two enter an integer." << endl;
    cin >> b;

    cout << "Both players agree on a Action." << endl;
    cin >> op;

    if(op == 'Q')
    {
        /* If A is greater than B then
                If A is less than 5 B wins.
           Else A wins. */

        if(a > b)
        {
            if(a < 5)
            {
                cout << "B wins." << endl;
            }
            else
            {
                cout << "A wins." << endl;
            }
        }
        else
        {
            cout << "A wins." << endl;
        }
    }
    else if(op == 'W')
    {
        /*
            If B is less than A.
                If B is less than 4 B wins.
            Else A wins.
         */

        if(b < a)
        {
            if ( b < 4)
            {
                cout << "B wins." << endl;
            }
            else
            {
                cout << "A wins." << endl;
            }
        }
        else
        {
            cout << "A wins." << endl;
        }
    }
    else if(op == 'E')
    {
        /*
    If A is less than B and greater than 5.
            If A is greater than 6 and less than 10 A wins.
    Else B wins.
     */
        if((a < b) && (a > 5))
        {
            if((a > 6) && (a < 10))
            {
                cout << "A wins." << endl;
            }
            else
            {
                cout << "B wins." << endl;
            }
        }
        else
        {
            cout << "B wins." << endl;
        }

    }
    else if(op == 'S')
    {
        /*
    If B is greater than or equal to A and less than 8.
            If B is less than 8, and less than A, B wins.
    Else A wins.
      */

        if ((b >= a) && (b < 8))
        {
            if ((b < 8) && (b < a))
            {
                cout << "B wins." << endl;
            }
            else
            {
                cout << "A wins." << endl;
            }
        }
        else
        {
            cout << "A wins." << endl;
        }
    }
    else if(op == 'Z')
    {
        /*
    If A is equal to B and less than 6.
            If A is equal to B and more than 3 A wins.
    Else B wins.
      */
        if ((a == b) && (a < 6))
        {
            if ((a == b) && (a > 3))
            {
                cout << "A wins." << endl;
            }
            else
            {
                cout << "B wins." << endl;
            }
        }
        else
        {
            cout << "B wins." << endl;
        }
    }
    else if(op == 'X')
    {
        /*
    If B is greater than 4, but less than 9, and greater than A.
            If B is less than 9, and greater than A, B wins.
    Else A wins.
      */
        if ((b > 4) && (b < 9) && (b > a))
        {
            if ((b < 9)&& (b > a))
            {
                cout << "B wins." << endl;
            }
            else
            {
                cout << "A wins." << endl;
            }
        }
        else
        {
            cout << "A wins." << endl;
        }
    }
    else if(op == 'C')
    {
        /*
    If A is less than 5 and equal to B.
            If A is less than 5 but less than or equal to B, B wins.
    Else A wins.
     */
        if ((a < 5) && (a == b))
        {
            if ((a < 5) && (a <= b))
            {
                cout << "B wins." << endl;
            }
            else
            {
                cout << "A wins." << endl;
            }
        }
        else
        {
            cout << "A wins." << endl;
        }
    }
    else
    {
        cout << "Invaild Action." << endl;
        return 0;
    }

    cout << a << op << b << endl;

    return 0;
}

int main()
{
    char doQuit;

    do
    {
        calulator();
        cout << "Thanks for playing! Press R to exit." << endl;
        cin >> doQuit;
    } while(doQuit != 'R');

    cout << "Goodbye!" << endl;

    return 0;
}

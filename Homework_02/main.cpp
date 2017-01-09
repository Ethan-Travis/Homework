#include <iostream>
using namespace std;

double calulator ()
{
    double a,b;
    char op;

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

    }
    else if(op == 'W')
    {
        if(a < b)
        {

        }
        else if(a < 5)
        {
            cout << "B wins." << endl;
        }
        else
        {
            cout << "A wins." << endl;
        }
    }
    else if(op == 'E')
    {
        if(b < a)
        {

        }
        else if(b < 4)
        {
            cout << "B wins." << endl;
        }
        else
        {
            cout << "A wins." << endl;
        }
    }
    else if(op == 'S')
    {
        cout << "Work in Progress." << endl;
    }
    else if(op == 'Z')
    {
        cout << "Work in Progress." << endl;
    }
    else if(op == 'X')
    {
        cout << "Work in Progress." << endl;
    }
    else if(op == 'C')
    {
        cout << "Work in Progress." << endl;
    }
    else
    {
        cout << "Invaild Action." << endl;
        return 0;
    }

    cout << a << op << b << endl;

    return; double;
}


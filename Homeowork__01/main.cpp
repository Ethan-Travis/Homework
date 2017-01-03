#include <iostream>
using namespace std;

int functionThatReturnsAnInteger()
{
    int Ethan;
    cin >> Ethan;
    if (Ethan < 1)
    {
        cout << "Plays Master Yi." << endl;
    }
    else
    {
        cout << "Plays Xin Zhao." << endl;
    }
    return Ethan;
}

int main()
{
    int Ktyal;
    cout << "enter a value" << endl;
    cin >> Ktyal;
    cout << Ktyal << endl;

    cout << functionThatReturnsAnInteger() << endl;

    if(Ktyal < 3)
    {
        cout << "Plays Wukong." << endl;
    }
    else
    {
        cout << "Plays Yasuo." << endl;
    }

    int GamerRose = Ktyal;

    while (GamerRose = Ktyal)
     {
       cin >> GamerRose;
       cout << "Plays Tristana." << endl;
     }

    cout << functionThatReturnsAnInteger() << endl;

    return 0;
}

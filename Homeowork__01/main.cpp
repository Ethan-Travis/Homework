#include <iostream>
using namespace std;

int functionThatReturnsAnInteger()
{
    int playerNumber;
    cin >> playerNumber;
    if (playerNumber < 1)
    {
        cout << " Player Number " << playerNumber << " is Master Yi. " << endl;
    }
    else
    {
        cout << " Player Number " << playerNumber <<" is Xin Zhao. " << endl;
    }
    return playerNumber;
}

int main()
{
    int Ktyal;
    cout << "enter Ktyal Player Number" << endl;
    cin >> Ktyal;
    cout << Ktyal << endl;

    if(Ktyal < 3)
    {
        cout << "Ktyal Plays Wukong. " << endl;
    }
    else
    {
        cout << "Ktyal Plays Yasuo. " << endl;
    }

    int otherPlayer = functionThatReturnsAnInteger();

    int Tristana = Ktyal;

    while (Tristana == Ktyal) // Make expression equal false to avoid making an infinite loop.
    {
       cin >> Tristana;
    }
    cout << "Ktyal (#" << Ktyal << ") Plays Tristana (#" << Tristana << ")." << endl;

    return 0;
}

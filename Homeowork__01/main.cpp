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

    if(Ktyal < 2)
    {
        cout << "Plays Wukong." << endl;
    }
    else
    {
        cout << "Plays Yasuo." << endl;
    }

    int GamerRose = Ktyal;

    while (GamerRose < 5)
     {
       cout << "Plays Tristana." << endl;
       GamerRose = 5;
     }

    return 0;
}

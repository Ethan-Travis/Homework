#include <iostream>
using namespace std;
int main()
{
    int Name;
    cout << "enter a value" << endl;
    cin >> Name;

    if(Name < 1)
    {
        cout << "Eat the Apple." << endl;
    }
    else
    {
        cout << "Eat the Oranges." << endl;
    }
    do
    {
      cout << "Eat the Grapes." << endl;
    }while (Name = 2);

    for(int i = 0; i < 6; i++)
    {
        switch(i)
        {
        case 1:
            cout << "1 Apple" << endl;
            break;

        case 2:
            cout << "2 Oranges" << endl;
            break;

        case 3:
            cout << "3 Grapes" << endl;
            break;

        case 4:
            cout << "4 Pears" << endl;
            break;

        case 5:
            cout << "5 Bananas" << endl;
            break;
        }
    }
    return 0;
}

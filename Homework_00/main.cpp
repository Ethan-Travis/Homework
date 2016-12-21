#include <iostream> // Makes these available cout,cin,endl.
using namespace std;
int main()
{
    int Name; // Declares Name to be an integer.
    cout << "enter a value" << endl; // Puts enter the value on the console.
    cin >> Name; // Waits for user to enter a value. Stores the value in Name.
    cout << Name << endl; // Printing the value that is in Name.

    // Checks if the expression is true before proceeding to Line 12.
    // Checks if the value stored in Name is less than one.
    if(Name < 1)
    {
        cout << "Eat the Apple." << endl;
    }
    else // If the value stored in Name is greater than or equal to one then else.
    {
        cout << "Eat the Oranges." << endl;
    }
    int Name2 = Name; // Declares Name2 as an integer and initializes Name2 with the value stored in Name.
    do // Run what's inside of it.
    {
      cout << "Eat the Grapes." << endl; // Prints the line "Eat the Grapes."
      Name2++; // Increases the value stored in Name2 by 1.
    } while (Name2 < 10); // goes to "do" while the value stored in Name2 is less than 10.

    for(
        int i = 0; // Declares i as an integer and initializes i with the value 0. Runs before the first while.
        i < 6;     // While the value of i is less than six run the code in the { }. Runs before each loop.
        i++        // Adds one to the current value of i after the }
        )
    {
        switch(i) // Goes to the case that has the same value as the value stored in i.
        {
        case 1:
            cout << "1 Apple" << endl; // Prints "1 Apple" to the console when i == 1.
            break;

        case 2:
            cout << "2 Oranges" << endl; // Prints "2 Oranges" to the console when i == 2.
            break;

        case 3:
            cout << "3 Grapes" << endl; // Prints "3 Grapes" to the console when i == 3.
            break;

        case 4:
            cout << "4 Pears" << endl; // Prints "4 Pears" to the console when i == 4.
            break;

        case 5:
            cout << "5 Bananas" << endl; // Prints "5 Bananas" to the console when i == 5.
            break;
        }
    } // i++ runs here.
    return 0;
}

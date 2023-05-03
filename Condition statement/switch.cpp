#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "***__Menu__*** /n 1) Coffee /n 2) Tea /n 3) Water /n" << endl;

    cout << "Please enter your choice =";
    cin >> choice;

    // Using if else condition
    /*if (choice == 1)
    {
        cout << "Coffee";
    }
    else if (choice == 2)
    {
        cout << "Tea";
    }
    else if (choice == 3)
    {
        cout << "Water";
    }
    else
    {
        cout << "Invalid Choice";
    }
    */

    // using switch
    switch (choice)
    {
    case 1:
        cout << "Coffee";
        break;
    case 2:
        cout << "Tea";
        break;
    case 3:
        cout << "Water";
        break;
    default:
        cout << "Invalid Choice";
    }
}
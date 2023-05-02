#include <iostream>
using namespace std;

int main()
{
    // for (int i = 1; i <= 5; i++)
    // {
    //     cout << i << endl;
    // }

    // for (int i = 3; i <= 20; i += 2)
    // {
    //     cout << i << endl;
    // }

    /*
    Remember the break; statement that was used in switch to stop it when a case was matched?

    It can also be used to stop a loop.
    */

    // For example:
    // for (int i = 0; i < 10; i++)
    // {
    //     if (i == 5)
    //     {
    //         break;
    //     }
    //     cout << i << endl;
    // }

    for (int x = 1; x < 10; x++)
    {
        if (x == 2)
        {
            continue;
        }
        if (x == 5)
        {
            break;
        }
        cout << x << endl;
    }
}
#include <iostream>
using namespace std;

int main()
{
    double prices[] = {5.99, 3.2, 9.99, 29.99};

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << prices[i] << endl;
    // }

    double total = 0;
    for (int i = 0; i < 4; i++)
    {
        total += prices[i];
    }
    cout << total;
}
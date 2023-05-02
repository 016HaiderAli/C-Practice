/*
Arrays
Remember the auto keyword? It was used to automatically set the type of a variable based on the value it is assigned to.

We can also use the auto keyword in a for-each loop:
*/

#include <iostream>
using namespace std;

int main()
{
    double prices[] = {5.99, 3.2, 9.99, 29.99};

    for (auto x : prices)
    {
        cout << x << endl;
    }
}
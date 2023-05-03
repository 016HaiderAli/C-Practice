#include <iostream>
using namespace std;
// basics of dynamic memory
/*
int main()
{
    int size = 8;

    // new operator allocates memory
    // int[] tells that the integers values will be stored in an array
    //  of size mentioned
    int *p = new int[size];

    p[0] = 128;
    p[1] = 888;
    p[2] = 9;

    cout << *(p + 1);
}*/

int main()
{
    int size = 8;

    int *p = new int[size];

    for (int i = 0; i < size; i++)
    {
        p[i] = i;
    }

    for (int i = 0; i < size; i++)
    {
        cout << p[i] << endl;
    }
}
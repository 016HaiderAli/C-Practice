/*
Arrays & Pointers
The name of an array is actually a pointer to its first element.

Each element can be accessed by incrementing the pointer.

Here is an example
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 6, 8};

    int *p = arr;

    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;
}

// Note, that we used *p = arr and not &arr.
// This is because the array name is already a pointer and is the same as &arr[0].
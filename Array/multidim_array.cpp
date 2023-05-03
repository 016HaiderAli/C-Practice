/*
Multidimensional Arrays
To create multidimensional arrays, place each array within its own set of square brackets:
example:
int seats[2][3] = {{1, 2, 3}, {4, 5, 6}};

The array has two dimensions: 2 rows and 3 column

The elements are accessed by using the row index and column index of the array.

For example, let's output the 3rd item of the 2nd array:

cout << seats[1][2];

The first index accesses the 2nd array, while the second index accesses the 3rd item in it. i.e, '6'/

*/

#include <iostream>
using namespace std;
int main()
{

    int x[3][2] = {{2, 4}, {6, 8}, {1, 2}};

    cout << x[2][0];
}
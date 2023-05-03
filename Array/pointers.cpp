/*
Pointers
In order to learn about dynamic memory, we first need to learn about pointers.

All variables that you create are stored in the memory.

A pointer is a variable that stores the memory address of another variable as its value.

It is defined using the asterisk sign and is defined just like a variable:
*/

#include <iostream>
using namespace std;

int main()
{
    int num = 42;

    // here a pointer p is declared containing the address of variable called num.
    //& is called address of
    //* is used to declare that a variable is a pointer.
    int *p = &num;

    /*

    Because the pointer points to the memory address of a variable, we can use it to change the value of that variable:

    For example:
    */

    *p = 8;

    cout << num;
    // cout << p;
}

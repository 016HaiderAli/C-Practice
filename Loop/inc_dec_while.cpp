/*
Increment & Decrement
As it's common to increment and decrement a variable's value by 1 in loops, C++ provides special increment and decrement operators.

For example, num=num-1 can be shortened to num--:
*/

#include <iostream>
using namespace std;
int main()
{
    // example of increment
    /*int num = 1;

    while (num <= 10)
    {
        cout << num << endl;
        num = num + 1; // can be written as num++
    }*/

    // example of decrement
    int num = 10;

    while (num >= 1)
    {
        cout << num << endl;
        num = num - 1; // can be written as num--
    }
}
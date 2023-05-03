/*
Countdown
Create a timer program that will take the number of seconds as input, and countdown to 0.

Here is a sample output for the input 5:

5
4
3
2
1
0

Note that the output should also include the number 0 and have each number on a new line.
*/

#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    while (number >= 0)
    {
        cout << number << endl;
        number--;
    }
}
/*while Loop
The while loop takes a condition and repeats its statements while the condition is true.*/

#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    while (num > 0)
    {
        cout << num << endl;
        num = num - 1;
    }
}
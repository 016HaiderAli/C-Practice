/*
NOT
The logical NOT operator ! reverses the condition:
in case the condition is true, the not operator will make it false, and vice-e-versa.
*/
#include <iostream>
using namespace std;
int main()
{
    int height;
    cout << "Please enter height = ";
    cin >> height;

    if (!(height < 150))
    {
        cout << "Welcome";
    }
}
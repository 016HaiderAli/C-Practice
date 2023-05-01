/*
auto
Another handy keyword is auto.

The auto keyword allows you to set the type of the variable based on its value.
a variable should be of camel case or start with underscore
*/

#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

int main()
{
     auto x = 4;
     auto y = 3.37;
     auto z = "hello";
     cout << x << " " << y << " " << z;

     // type of varaible
     cout << endl
          << "type of variable x is " << typeid(x).name();
     cout << endl
          << "type of variable y is " << typeid(y).name();
     cout << endl
          << "type of variable z is " << typeid(z).name();
}
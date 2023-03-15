/*scope is a region of the program and broadly speaking there are three places, where variables can be declared -
1) inside a function or a block which is called local variables. 
2) in the def of function parameters which are called formal parameters.
3) outside of all functions which are called global variables.

Local Variables: 
Variables that are declared inside a function are local variables. 
they can be used only by statements that are inside that function or block of code.
local variables are not known to functions outside their own.

Example:
#include<iostream>
using namespace std;
int main(){
    //local variable declaration
    int a,b,c;

    //actual initialization
    a=10,b=20;
    c = a+b; 
    cout<<c;

    return 0;
}*/

/*Global Variable
Global variables are defined outside of all the functions, usually on top of the program.
the global variable will hold their value throughout the life-time of your program.

example:
#include<iostream>
using namespace std;
//global variable 
int g;
int main(){
    //local variable declaration
    int a,b,c;

    //actual initialization
    a=10,b=20;
    c = a+b; 
    cout<<g;

    return 0;
}*/
//output will be 0 as there is no value assigned to g.

/*a Global variable can be accessed by any function. 
That means, a global variable is available for use throughout your entire program after its declaration

A program can have the same name for local and global variables but the value of the local variable inside a function will take preference.
Example:
*/
#include<iostream>
using namespace std;
//global variable 
int g=20;
int main(){
    int g =10;
    cout<<g;

    return 0;
}
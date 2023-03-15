/*FIND FACTORIAL OF A NUMBER*/
#include<iostream>
using namespace std;
int main(){
    int number, i=1, fact=1;
    cout<<"please enter a number of whose factorial you want to find out = ";
    cin>>number;

    while (number>=i)
    {
        fact = number * (number-1);
        i++;
    }
    cout<<"factorial of "<<number<<" is "<<fact;
    return 0;
}
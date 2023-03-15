/*Syntax:do{
    statement(s);
}
while(condition)*/
#include<iostream>
using namespace std;
int main(){
    int a=10;
    do{
        cout<<"value of a is "<<a<<endl;
        a++;
    }
    while (a<20);

    return 0;
}
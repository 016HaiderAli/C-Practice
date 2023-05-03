/*A while loop statement repeatedly executes a target statement as long as a given condition is true.
Syntax:
while(condition){
    statement(s); //can be a single statement or a block of statements.
}
example:
*/
#include<iostream>
using namespace std;
int main(){
    int a = 10;
    while(a<20){
        cout<<"value of a is "<<a<<endl;
        a++;
    }
}
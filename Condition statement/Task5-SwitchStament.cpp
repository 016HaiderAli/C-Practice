#include<iostream>
using namespace std;
int main(){
 char grade = 'D';

 switch (grade)
 {
 case 'A':
    cout<<"Excellent"<<endl;
    break;
 case 'B':
    cout<<"Very Well Done"<<endl;
    break;
 case 'C':
    cout<<"Well done"<<endl;
    break;
 case 'D':
    cout<<"Yes passed"<<endl;
    break;
 case 'F':
    cout<<"You Failed, Better luck next time"<<endl;
    break;
 default:
    cout<<"Invalid Grade";
    break;
 }
 cout<<"your grade is "<<grade<<endl;
}
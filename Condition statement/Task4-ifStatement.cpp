/*We need to test that if the age of the candidate is greater than or equal to 18 than they are eligible to vote otherwise they cannot*/
#include<iostream>
using namespace std;
int main(){
 int age;
 cout<<"Please enter your age = ";
 cin>>age;

 if(age>=18){
    cout<<endl<<"Candidate is eligible to vote";
 }
 else{
    cout<<"Candidate is ineligible to vote";
 }
 return 0;
}
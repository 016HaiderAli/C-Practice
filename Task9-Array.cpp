//Syntax: type arrayName(size)
#include<iostream>
using namespace std;
int main(){
    int roll_no[5];
    // roll_no[5] = {50,52,55,57,61}
    roll_no[0]=50;
    roll_no[1]=52;
    roll_no[2]=55;
    roll_no[3]=57;
    roll_no[4]=61;

    for(int i=0; i<5;i++){
        cout<<"element at index "<<i<<" is "<<roll_no[i]<<endl;
    }
}
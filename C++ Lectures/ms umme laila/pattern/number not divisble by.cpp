#include<iostream>
using namespace std;
int main()
{
	int n,d;
	
	cout<<"please enter a number = ";
	cin>>n;
	
	cout<<endl<<"please enter another number = ";
	cin>>d;
	
	if(!(n%d))
		cout<<n<<"is not divisible by "<<d;

	system("pause");
	return 0;
}

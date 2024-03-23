#include<iostream>
using namespace std;
int main()
{
	int a,b,i;
	cout<<"Enter the two numbers"<<endl;
	cin>>a>>b;
	cout<<"Enter 1 for addition\nEnter 2 for substraction\nEnter 3 for multiplication\nEnter 4 for division\n";
	cin>>i;
	switch(i)
	{
		case 1:
			cout<<a+b;
			break;
		case 2:
			cout<<a-b;
			break;
		case 3:
			cout<<a*b;
			break;
		case 4:
			cout<<(double)a/b;
			break;
		default:
			cout<<"Invalid Input";
	}
}
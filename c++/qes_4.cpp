#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cin>>a;
	cin>>b;
	char ch;
	cin>>ch;
    cout<<"1st number:"<<a;
    cout<<"\n2nd number:"<<b;
    cout<<"\nOperator:"<<ch;
    cout<<"\nResult:";
	switch(ch)
		{
		
		case'+':cout<<a+b;
		break;
		case'-':cout<<a-b;
			break;
		case'*':cout<<a*b;
		break;
		case'/':cout<<a/b;
		break;
		case'%':cout<<a%b;
		break;
		default:cout<<"no operands";
		break;
}
return 0;
}
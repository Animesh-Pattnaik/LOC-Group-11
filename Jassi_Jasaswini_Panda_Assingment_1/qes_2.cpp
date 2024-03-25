#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
    cout<<"Number:"<<n;
	if(n>0)
	{
		cout<<"\npositive number";
		
	}
    else if(n<0)
	{
		cout<<"\nnegative number";
	}
	else
	{
		cout<<"\nzero";
	}
	return 0;
}
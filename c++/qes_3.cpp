#include<iostream>
using namespace std;
int main()
{
	int n;
	int p;
	int s;
	s=0;
	cin>>n;
    cout<<"Number: "<<n;
	do{
	 p=n%10;
		s=s+p;
		n=n/10;
	}while(n!=0);
	cout<<"\nSum:"<<s;
	return 0;
}
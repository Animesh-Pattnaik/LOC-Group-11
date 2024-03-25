#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
    cout<<"Year:"<<n;
	if((n%4==0&&n%100!=0)||n%400==0)
	{
		cout<<"\nLeap year";
	}
	else{
		cout<<"\nNot a leap year";
	}
    return 0;
	
}
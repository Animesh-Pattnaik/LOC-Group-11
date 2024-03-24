#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	float t;
	float p;
	float avg;
	cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
	cout<<"Marks of English:"<<a;
	cout<<"\nMarks of Maths:"<<b;
	cout<<"\nMarks of Science:"<<c;
	cout<<"\nMarks of SST:"<<d;
	cout<<"\nMarks of Hindi:"<<e;
	t=a+b+c+d+e;
	p=t/5;
	avg=(t/500)*100;
    cout<<"\nTotal:"<<t;
    cout<<"\nAverage:"<<avg;
    cout<<"\nPercentage:"<<p;
    return 0;
    }
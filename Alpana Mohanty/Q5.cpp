#include<iostream>
using namespace std;
int main()
{
int radius;
cout<<"Enter radius of the circle ";
cin>>radius;
float diameter = 2*radius;
float circumference = 6.28 * radius;
float area = 3.14 * radius * radius;
cout<<"Diamater "<<diameter<<endl;
cout<<"Circumference "<<circumference<<endl;
cout<<"Area "<<area<<endl;
}

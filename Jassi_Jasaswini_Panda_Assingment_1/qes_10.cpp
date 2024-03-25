#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"Sides of Triangle :"<<a<<","<<b<<","<<c;
    if(a==b && b==c)
    {
        cout<<"\nEquilateral Triangle";
    }
    else if(a==b && b!=c)
    {
        cout<<"\nIsoceles Triangle";
    }
    else if(a==c && c!=b)
    {
        cout<<"\nIsoceles Triangle";
    }
    else if(b==c && a!=c)
    {
        cout<<"\nIsoceles Triangle";
    }
    else
    {
        cout<<"\nScalene Triangle";
    }
    return 0;
}
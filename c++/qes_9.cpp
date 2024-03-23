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
    if(a+b+c==180)
    {
        cout<<"Triangle is valid";
    }
    else
    {
        cout<<"Triangle is not valid";
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,s=1;
    cout<<"Enter n : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<s<<" ";
            s++;

        }
        cout<<endl;
    }
    return 0;
}
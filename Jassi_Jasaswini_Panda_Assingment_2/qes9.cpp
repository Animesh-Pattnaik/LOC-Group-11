#include<iostream>
using namespace std;
int main()
{
    int n,i,j,s=1;
    cout<<"Enter n : ";
    cin>>n;
    for(i=n;i>=1 && i<=n;i--)
    {
        for(j=i;j<=i && j>=1;j--)
        {
            cout<<"* ";

        }
        cout<<endl;
    }
    return 0;
}
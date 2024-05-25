// Take two array as input, merge them and print it in reverse order using loop.
#include<iostream>
using namespace std;
int main()
{
    int a[100],b[100];
    int n,m;
    cin>>n>>m;
    cout<<"Enter element of array a :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter element of array b:";
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    cout<<"Elements after merging:";
    for(int i=0;i<m+n;i++)
    {
        if(i>=n)
        {
            a[i]=b[i-n];
            
        }
        cout<<a[i]<<" ";
    }
    cout<<"\nElement after reversing:";
    for(int i=(m+n)-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
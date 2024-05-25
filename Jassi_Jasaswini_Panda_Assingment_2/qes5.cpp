 //Write a C++ program to copy the elements of one array into another array.
#include<iostream>
using namespace std;
int main()
{
    int a[100],b[100];
    int n;
    cin>>n;
    cout<<"Enter element of array a: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Elements of array a: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    cout<<"\nElement array b:";
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
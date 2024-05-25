//Write a C++ program to find the total number of alphabets , digits and special characters in a string.
#include<iostream>
using namespace std;
int main()
{
    char s[100];
    int n,c=0,q=0,p=0;
    cin>>n;
    cout<<"Enter character:";
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=127))
        {
            c++;
        }
        else if(s[i]>=48 && s[i]<=57)
        {
            q++;
        }
        else{
            p++;
        }
    }
        cout<<"Alphabet: "<<c<<endl;
        cout<<"Special character: "<<p<<endl;
        cout<<"Number: "<<q;
        return 0;
    
}
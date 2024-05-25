#include<iostream>
using namespace std;
int main()
{
    char s[100];
    int n,v=0,c=0;
    cin>>n;
    cout<<"Enter character:";
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a' || s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            v++;
        }
        else
        {
           c++;
        }       
     }
    
    cout<<"Number of vowels:"<<v<<endl;
    cout<<"Number of consonant:"<<c<<endl;
    return 0;
}
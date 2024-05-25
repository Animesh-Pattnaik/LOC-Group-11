#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[100];
    int v = 0, c = 0, n = 0, s = 0;
    cout << "Enter a string: ";
    gets(str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        //can use tolower/upper as well
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            ++v;
        else 
        ++c;
    }
    cout << "Number of vowels: " << v << endl;
    cout << "Number of consonants: " << c;
}
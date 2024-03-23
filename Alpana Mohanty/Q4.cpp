#include<iostream>
using namespace std;
int main()
{
    int first_num,second_num;
    char value;
    cout<<"Enter your first number: ";
    cin>>first_num;
    cout<<"Enter your second number: ";
    cin>>second_num;
    cout<<"choose your arithmetic operator:+,-,*,/,% --->";
    cin>>value;

    switch(value)
    {
    case '+':
        cout<<"SUM: "<< first_num + second_num;
        break;
    case '-':
        cout<<"Difference: "<< first_num - second_num;
        break;
    case '*':
        cout<<"Product: "<< first_num * second_num;
        break;
    case '/':
        if(second_num != 0)
        cout<<"Quotient: "<< first_num / second_num;
        else
            cout<<"Cannot divide it by zero";
        break;
    case '%':
        if(second_num != 0)
        cout<<"Remainder: "<< first_num % second_num;
        else
            cout<<"Cannot divide it by zero";
        break;

    default:
        cout<<"Please enter a valid operator";
    }
}

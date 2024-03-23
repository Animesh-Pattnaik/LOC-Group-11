#include <iostream>
using namespace std;

int main()
{
   int num,sum=0;
   cout<<"Enter your number: ";
   cin>>num;
   int temp=num;
   do
   {
       sum+=temp % 10;
       temp/= 10;
   }
   while(temp!=0);
   cout<<"Sum of digits of the number is: "<<sum;
}


#include<iostream>
int main()
{
	int r,sum=0,c;
	std::cout << "Enter a number";
	std::cin >> c;
	do
	{
		r=c%10;
		sum=sum+r;
		c=c/10;
		
	}
	while(c>0);
		
	std::cout <<"Sum of digits=" << sum;
return 0;
}

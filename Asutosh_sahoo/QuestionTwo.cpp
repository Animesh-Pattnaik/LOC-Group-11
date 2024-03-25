#include<iostream>
int main()
{
	int i;
	std::cout << "enter a number";
	std::cin  >> i;
	if(i>0)
	{
		std::cout << i<< " is a Positive Number";
	
	}
	else if(i<0)
	{
		std::cout << i<< " is a Negative Number";
	}
	else
	{
		std::cout << i <<"=0";
	}
return 0;
}

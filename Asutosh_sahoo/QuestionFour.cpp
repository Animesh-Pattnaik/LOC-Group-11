#include<iostream>
int main()
{
	float a,b,c;
	int i;
	std::cout<<"Enter the first number";
	std::cin >> a;
	std::cout<<"\n";
	std::cout<<"Enter the second number";
	std::cin >> b;
	std::cout<<"Choose \n1 for addition\n2 for subtraction\n3 for multiplication \n4 for division\n5 for quiting  ";
	std::cin >>i;
	switch(i)
	{
		case 1:
			c=a+b;
			std::cout <<"Sum=" <<c;
			break;
	
	
		case 2:
			c=a-b;
			std::cout <<"Difference=" <<c;
			break;
	
	
		case 3:
			c=a*b;
			std::cout <<"Product=" <<c;
			break;
			
	
	
		case 4:
			c=a/b;
			std::cout <<"Division=" <<c;
			break;
			
	
	
		case 5:
			std::cout<<" Program Exited";
			exit(0);
			break;
		default:
			std::cout << "Wrong Choice";
	}
return 0;
}

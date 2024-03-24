#include <iostream>
int main(){

	for(int i=1;i<100;i++)
	{
	    if(i%3!=0 && i%5!=0)
	    {
		    std::cout << i << "\n";
	    }
	    else if(i%3==0)
	    {
		    std::cout << "Fizz\n";
	    }
	    else
	    {
		    std::cout << "Buzz\n";
	    }
	    
}
return 0;
}

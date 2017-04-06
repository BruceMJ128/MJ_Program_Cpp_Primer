#include <iostream>

int main()
{
	std::cout<<"Please input some numbers."<<std::endl;
	
	int amount=0,i=0;
	while(std::cin>>i)
	
		if(i<0)
		
			++amount;
		
	
	
	std::cout<<"Amount of negative number is "<<amount<<std::endl;
	return 0;
}

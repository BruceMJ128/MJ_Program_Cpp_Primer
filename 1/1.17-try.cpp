#include <iostream>

int main()
{
	int amount =0 , value;
	while (std::cin>>value)
	if(value<=0)
	++amount;
	std::cout<<"Amount is"<<amount<<std::endl;
	return 0;
}

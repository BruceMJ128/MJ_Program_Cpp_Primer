#include <iostream>

int main()
{
	int i, j;
	int Large;
	
	std::cout<<"Enter two number"<<std::endl;
	std::cin>>i>>j;
	//std::cout<<std::endl;
	
	if(i<=j)
	{
		Large=j;
	}
	else
	{
		Large=i;	
	}
	std::cout<<"Larger number is "<<Large<<std::endl;
	return 0;
}

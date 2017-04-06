#include <iostream>

int main()
{
	int sum=0;
	for(int i = 50; i<=100; ++i)
	sum +=i;
	
	std::cout<<sum<<std::endl;
		
	int sumwhile=0, v1=50;
	while(v1<=100)
	{
		sumwhile +=v1;
		++v1;
	}
	std::cout<<"Sum using while is "<<sumwhile<<"."<<std::endl;
	return 0;
}

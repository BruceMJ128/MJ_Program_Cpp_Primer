#include <iostream>
#include "math.h"

int main ()
{
	long double a, b;
	std::cout<<"Enter function factors: base "<<std::endl;
	std::cin>>a;
	std::cout<<"Enter function factors: exponent "<<std::endl;
	std::cin>>b;
	
	std::cout<<"The exponential function result is "<<pow(a,b)<<std::endl;
	return 0;
}

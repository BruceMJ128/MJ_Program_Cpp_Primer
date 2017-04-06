#include <iostream>
int main()
{
	double dval = 3.14;
	const int &ri = dval;
	std::cout<<dval<<" "<<ri<<std::endl;
	
	double &r2 = dval;
	r2 ++;
	int r3=1.01;
	std::cout<<dval<<" "<<r2<<" "<<r3<<std::endl;
	return 0;
}




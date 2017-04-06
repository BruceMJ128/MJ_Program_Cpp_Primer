#include <iostream>
#include <initializer_list>

using namespace std;

int sum(initializer_list<int> ia)
{
	int a=0;
	for(auto beg=ia.begin();beg!=ia.end();++beg)
	{
		a +=*beg;
	}
	return a;
}

int main()
{
	int sum_a;
	initializer_list<int> b={0,1,2,4};
	sum_a = sum (b);
	//sum_a=sum({0,1,2,4});
	
	cout<<sum_a<<endl;
	
	return 0;
	
}

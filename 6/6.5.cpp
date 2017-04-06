#include <iostream>
#include <math.h>

using namespace std;

int fact(int val)
{
	int result;
	result=abs(val);
	return result;
}

int main()
{
	cout<<"Input int: "<<endl;
	int a, a_abs;
	cin>>a;
	a_abs=fact(a);
	cout<<"abs of a is "<<a_abs<<endl;
	
	return 0;
}

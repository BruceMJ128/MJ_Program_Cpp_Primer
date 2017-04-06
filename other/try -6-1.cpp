#include <iostream>
#include <fact.h>

using namespace std;

int main()
{
	cout<<"Input int:"<<endl;
	int a, a_abs;
	cin>>a;
	a_abs=fact(a);
	cout<<"a_abs = "<<a_abs<<endl;
	
	return 0;
}

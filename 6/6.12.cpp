#include <iostream>

using namespace std;

void exchange(const int &x, int &y)
{
	int z=x;
	//x=y;
	y=z;
}

int main()
{
	int a=2, b=3;
	exchange(2, b);
	
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	return 0;
}

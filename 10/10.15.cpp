#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a=4;
	auto f = [a] ( int b) ->int {return a+b;} ;
	
	a=10;
	auto x=f(2);
	
	cout<<x<<endl;
	return 0;
}

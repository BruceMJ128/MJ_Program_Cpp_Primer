#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	auto f = [] (int a, int b) ->int {return a+b;} ;
	auto x=f(1, 2);
	
	cout<<x<<endl;
	return 0;
}

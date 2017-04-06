#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
	int a, b;
	
	cout<<"Input two int, a and b:"<<endl;
	cin>>a>>b;
	
		if(b==0)
	{
		throw runtime_error("b cannot be zero.");
	}
	
	cout<<static_cast<double> (a) /b<<endl;
	return 0;
}

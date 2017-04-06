#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout<<"Input two int, a and b:"<<endl;
	cin>>a>>b;
	
	cout<<static_cast<double> (a) /b<<endl;
	return 0;
}

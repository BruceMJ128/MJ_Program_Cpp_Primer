#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a,b;
	while (getline(cin,a))
	{
		cout<<a<<endl;
	}
	while (cin>>b)
	{
		cout<<b<<endl;
	}
	
	return 0;
}

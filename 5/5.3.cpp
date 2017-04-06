#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout<<"Input a: "<<endl;
	cin>>a;
	
	if(a>=0)
	{
		b=a;
	}
	else
	{
		b=-a;
	}
	
	if(b%2==0)
	{
		cout<<"a is even number."<<endl;
	}
	else
	{
		cout<<"a is odd number."<<endl;
	}
}

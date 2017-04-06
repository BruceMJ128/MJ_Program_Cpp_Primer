#include <iostream>

using namespace std;

int fact(int val)
{
	int factorial=1;
	while(val>1)
	{
		factorial *= val--;
	}
	return factorial;
}

int main()
{
	int a1, result;
	cout<<"Input number: "<<endl;
	cin>>a1;
	
	result=fact(a1);
	cout<<"the factorial of "<<a1<<" is "<<result<<endl;
	
	return 0;
}

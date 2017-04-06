#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	const size_t n=5;
	int a1[n], a2[n];
	
	cout<<"size of array a1 is "<<n<<endl;
	cout<<"Input array a1: "<<endl;
	
	for(int i=0;i!=n;++i)
	{
		cin>>a1[i];
		cout<<a1[i]<<" ";
	}
	
	cout<<endl;
	
	cout<<"size of array a2 is "<<n<<endl;
	cout<<"Input array a2: "<<endl;
	
	for(int i=0;i!=n;++i)
	{
		cin>>a2[i];
		cout<<a2[i]<<" ";
	}
	
	cout<<endl;
	
	int number=0;
	
	for(int i=0;i!=n;++i)
	{
		if(a1[i]!=a2[i])
		{
			cout<<i<<endl;
			number=number+1; 
		}
	}
	
	cout<<a1<<endl;
	cout<<a2<<endl;
	cout<<number<<endl;
	
	if(number==0)
	{
		std::cout<<"array a1 is equal to a2."<<endl;
	}
	else
	{
		std::cout<<"array a1 is not equal to a2."<<endl;
	}
	return 0;
}

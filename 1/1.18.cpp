#include <iostream>
using namespace std;

int main()
{
	cout<<"Enter two numnber:"<<endl;
	
	int v1, v2, max,min,i;
	cin>>v1>>v2;
	
	if(v1<=v2)
	{
		max=v2;
		min=v1;
	}
	else
	{
		max=v1;
		min=v2;
	}
	
	i=min;
	
	while(i<=max)
	{
		cout<<i<<" ";
		++i;
	}
	
	std::cout << std::endl;
		
	return 0;
}

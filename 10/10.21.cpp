#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int x=0;

	auto f=[x] () mutable -> bool 
	{
		if(x>0)
		{
			while(x>0)
			{
				--x;
			}
			cout<<"x>0"<<endl;
			return false;
		}
		else if(x==0)
		{
			cout<<"x=0"<<endl;
			return true;
		}
		else
		{
			cout<<"x<0"<<endl;
			return false;
		} 
	};
	cout<<"x1: "<<x<<endl;
	x=5;
	auto result=f();
	cout<<"bool "<<result<<endl;
	cout<<"x2 "<<x<<endl;
	
	return 0;
}

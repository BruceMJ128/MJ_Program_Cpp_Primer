#include <list>
#include <deque>
#include <iostream>

using namespace std;

int main()
{
	list<int> li={2,4,6,7,8,11};
	deque<int> di_even, di_odd;
	
	for(auto x:li)
	{
		if(x%2==0)
		{
			di_even.push_back(x);
		}
		else
		{
			di_odd.push_back(x);
		}
	}
	
	for(auto x:di_even)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	for(auto x:di_odd)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	return 0;
	
}

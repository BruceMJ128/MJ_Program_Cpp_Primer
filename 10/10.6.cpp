#include <algorithm>
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
	list<int> li1(5,1);
	
	cout<<"original list:"<<endl;
	for(auto x: li1)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	fill_n(li1.begin(),li1.size(),0);
	
	cout<<"transformed list:"<<endl;
	for(auto x: li1)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	return 0;
}

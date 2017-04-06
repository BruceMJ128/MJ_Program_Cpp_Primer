#include <new>
#include <memory>
#include <iostream>
#include <vector>
#include <string>


using namespace std;

shared_ptr<vector<int>> func1()
{
	return make_shared<vector<int>>();
	
}

void func2(shared_ptr<vector<int>> p)
{
	int i;
	while(cin>>i)
	{
		p->push_back(i);
	}
}

void func3(shared_ptr<vector<int>> p)
{
	for(auto x: *p)
	{
		cout<<x<<" ";
	}
	cout<<endl;
}

int main()
{
	shared_ptr<vector<int>> p1=func1();
	func2(p1);
	func3(p1);
	
	return 0;
}

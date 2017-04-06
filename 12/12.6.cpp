#include <new>
#include <memory>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int>* func1()
{
	return new vector<int>;
}

void func2(vector<int> * pv)
{
	int i;
	while(cin>>i)
	{
		pv->push_back(i);
	}
}

void func3(vector<int> *pv)
{
	for(auto x: *pv)
	{
		cout<<x<<" ";
	}
	cout<<endl;	
}

int main()
{
	vector<int>* pv1=func1();
	func2(pv1);
	func3(pv1);
	
	delete pv1;
	return 0;
}

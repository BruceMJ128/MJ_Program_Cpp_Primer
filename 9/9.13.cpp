#include <vector>
#include <list>
#include <iostream>

using namespace std;

int main()
{
	list<int> l1{2,4,6,7,8};
	vector<double> v1;
	for(auto & x:l1)
	{
		v1.push_back(x);
	}
	
	vector<int> v2(v1.begin(),v1.end());
	
	vector<double> v3(v1);
	
		for(auto& y : v3)
	{
		cout<<y<<" ";
	}
	cout<<endl;
	
	return 0;
}

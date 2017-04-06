#include <algorithm>
#include <vector>
#include <iterator>
#include <list>
#include <iostream> 
using namespace std;

int main()
{
	vector<int> vec;
	list<int> lst;
	int i;
	while (cin>>i)
	{
		lst.push_back(i);
	}
	copy(lst.begin(),lst.end(),back_inserter(vec));
	
	for(auto x: vec)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	return 0;
}

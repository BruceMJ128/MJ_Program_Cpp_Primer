#include <list>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	vector<int> vec1{1,2,3,1,4,2,5};
	list<int> l2;
	sort(vec1.begin(),vec1.end());
	auto iter=unique(vec1.begin(),vec1.end());
	
	unique_copy(vec1.begin(),iter,back_inserter(l2));
	
	for(auto x:l2)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	return 0;
}

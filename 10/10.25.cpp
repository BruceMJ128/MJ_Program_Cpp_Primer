#include <list>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	list<int> l1{1,2,3,1,4,2,5}, l2;
	auto iter=unique(l1.begin(),l1.end());
	
	for(auto x: l1)
	{ cout<<x<<" ";
	} cout<<endl;
	
	l2 = unique_
}

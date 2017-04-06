#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <string>
#include <list>

using namespace std;

int main()
{
	list<int> ls;
	
	for(int i=10;i!=-5;i--)
	{
		ls.push_back(i);
		cout<<i<<" ";
	}
	cout<<endl;
	
	auto r_iter=find_if(ls.crbegin(),ls.crend(),[](int x){return x==0;});
	cout<<*r_iter<<endl;
	cout<<*prev(r_iter)<<endl;
	
	auto iter=r_iter.base();
	cout<<*iter<<endl;
	cout<<*prev(iter)<<endl;
	
	return 0;
}

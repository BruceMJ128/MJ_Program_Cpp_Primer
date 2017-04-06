#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <string>
#include <list>
#include <vector>
using namespace std;

int main()
{
	list<int> ls,ls2;
	vector<int> vec;
	
	for(int i=5;i!=-5;i--)
	{
		vec.push_back(i);
		cout<<i<<" ";
	}
	cout<<endl;
	
	copy(vec.crbegin()+4,vec.crbegin()+9,back_inserter(ls));
	copy(vec.begin()+1,vec.begin()+6,front_inserter(ls2));
	
	
	for(auto x: ls) cout<<x<<" ";
	cout<<endl;
	for(auto x: ls2) cout<<x<<" ";
	cout<<endl;
	
	return 0;
}

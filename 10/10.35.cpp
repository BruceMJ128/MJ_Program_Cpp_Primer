#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <string>
#include <list>

using namespace std;

int main()
{
	vector<int> vec;
	
	for(int i=0;i!=10;i++)
	{
		vec.push_back(i);
		cout<<i<<" ";
	}
	cout<<endl;
	
	for(auto iter=prev(vec.end());iter!=prev(vec.begin());--iter)
	{
		cout<<*iter<<" ";
	}
	cout<<endl;
	return 0;
}

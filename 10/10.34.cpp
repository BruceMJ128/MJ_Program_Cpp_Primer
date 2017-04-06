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
	}
	
	for(auto iter=vec.rbegin();iter!=vec.rend();++iter)
	{
		cout<<*iter<<" ";
	}
	cout<<endl;
	return 0;
}

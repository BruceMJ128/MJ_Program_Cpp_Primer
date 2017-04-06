#include <vector>
#include <functional>
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
	vector<int> v1, v2,v3;
	list<int> l4;
	for(auto i=1;i!=10;++i)
	{
		v1.push_back(i);
	}
	
	copy(v1.begin(),v1.end(),inserter(v2, v2.begin()));
	copy(v1.begin(),v1.end(),back_inserter(v3));
	copy(v1.begin(),v1.end(),front_inserter(l4));
	
	for(int i=0;i!=v1.size();++i)
	{
		cout<<v2[i]<<" "<<v3[i]<<endl;
	}
	
	cout<<"list 4: "<<endl;
	for(auto x: l4)
	{
		cout<<x<<" ";
	}cout<<endl;
	
	return 0;	
}

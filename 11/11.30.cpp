#include <map>
#include <algorithm>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	multimap<string, string> mm;
	string name, works;
	ifstream ifs("../data/music.txt");
	while(ifs>>name>>works)
	{
		mm.insert(make_pair(name,works));
	}
	/*
	for(auto x:mm)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
	*/
	map<string, string> m;
	copy(mm.begin(),mm.end(),inserter(m,m.end()));
	
	/*
	for(auto x:m)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
	*/
	
	for(auto iter=m.begin();iter!=m.end();++iter)
	{
		cout<<(iter->first)<<": ";
		for(auto pos=mm.equal_range(iter->first);pos.first!=pos.second;++pos.first)
		{
			cout<<pos.first->second<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}

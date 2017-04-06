#include <string>
#include <iterator>
#include <map>
#include <fstream>
#include <iostream>
#include <utility>

using namespace std;

int main()
{
	map<string, size_t> m;
	ifstream ifs("../data/letter.txt");
	string s;
	while(ifs>>s)
	{
		++m.insert({s, 0}).first->second;
		/*
		auto ret=m.insert({s,1});
		if(!ret.second)
		{
			cout<<"already exist: "<<ret.first->first<<endl;
			++ret.first->second;
		}
		*/		
	}
	
	for(auto x: m)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
	
	return 0;
}

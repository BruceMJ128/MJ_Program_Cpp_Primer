#include <map>
#include <iterator>
#include <iostream>
#include <string>
using namespace std;

int main()
{

	pair<int, string> p1{1, "miao"};
	map<int, string> m{p1};
		
	m[2]="Zhao";
	
	m[3];
	auto iter=prev(m.end());
	iter->second = "Bao";
	
	for(auto x: m)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
	return 0;
}

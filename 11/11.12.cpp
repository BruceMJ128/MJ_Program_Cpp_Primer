#include <string>
#include <utility>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	//pair<string, int> p1("Miao", 29), p2("Bao", 28);
	vector<pair<string, int>> vec;
	//vec.push_back(p1);
	//vec.push_back(p2);
	
	string s;
	int i;
	
	while(cin>>s>>i)
	{
		//vec.push_back(pair<string, int> (s,i));
		//vec.push_back(make_pair(s,i));
		//vec.push_back({s,i});
		vec.emplace_back(s,i);
	}
	
	for(auto x: vec)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
	
	
	return 0;
}

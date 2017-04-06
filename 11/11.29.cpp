#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	multimap<string, string> mm;
	ifstream ifs("../data/name.txt");
	string fn, gn;
	
	while(ifs>>fn>>gn)
	{
		mm.insert(make_pair(fn,gn));
	}
	
	for(auto x :mm)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
	
	string s1="Zhao";
	string s2="Zz";
	string s3=s2;

	auto y=mm.lower_bound(s3);
	auto x=mm.upper_bound(s3);
	
	cout<<"mm.lower_bound(s3): "<<y->second<<endl;
	cout<<"mm.upper_bound(s3): "<<x->second<<endl;
	
	
	auto pa=mm.equal_range(s3);
	cout<<"equal_range: ";
	cout<<pa.second->second<<endl;
	
	return 0;
}


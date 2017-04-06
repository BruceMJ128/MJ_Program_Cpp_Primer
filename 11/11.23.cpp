#include <map>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
	//map<string, vector<string>> mm;
	multimap<string, vector<string>> mm;
	string n;	
	ifstream ifs("../data/name.txt");
	/*
	while(getline(ifs,n))
	{
		
		auto iter=find_if(n.begin(),n.end(),[](char x){	return x==' ';});
		string fn(n.begin(),iter);     //fn: family name
		string gn(iter+1, n.end());    //gn: given name
			
		vector<string> vec;
		vec.push_back(gn);
		auto ret=mm.insert(make_pair(fn,vec));
	}
	*/
	string fn, gn;
	while(ifs>>fn>>gn)
	{
		vector<string> vec;	
		vec.push_back(gn);	
		auto ret=mm.insert(make_pair(fn,vec));
		
	}
	for(auto x:mm)
	{
		cout<<x.first<<endl;
		for(auto y: x.second)
		{
			cout<<y<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}

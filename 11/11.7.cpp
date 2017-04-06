#include <map>
#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	map<string, vector<string>> NAME;
	string n;
	ifstream ifs("../data/name.txt");
	
	while(getline(ifs,n))
	{
		auto iter=find_if(n.begin(),n.end(),[](char x){	return x==' ';});
		string fn(n.begin(),iter);     //fn: family name
		string gn(iter+1, n.end());    //gn: given name
		NAME[fn].push_back(gn);
				
	}
		
	for(auto x: NAME)
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

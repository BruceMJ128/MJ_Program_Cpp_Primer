#include <map>
#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	map<string, vector<pair<string, int>>> NAME;
	string fn;
	string gn;
	int bd;  //birthday
	ifstream ifs("../data/name.txt");
	
	while(ifs>>fn>>gn>>bd)
	{
		NAME[fn].push_back(make_pair(gn,bd));				
	}
		
	for(auto x: NAME)
	{
		cout<<x.first<<endl;
		for(auto y: x.second)
		{
			cout<<y.first<<" "<<y.second<<endl;
		}
	}
	
	return 0;
}

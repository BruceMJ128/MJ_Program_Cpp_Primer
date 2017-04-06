#include <map>
#include <unordered_map>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream ifs("../data/letter.txt");
	unordered_map<string, int> um;
	string temp;
	while(ifs>>temp)
	{
		auto iter=um.find(temp);
		if(iter==um.end())
		{
			um.insert(make_pair(temp,1));
		}
		else
		{
			++iter->second;
		}
	}
	
	for(auto x:um)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
	
	return 0;
}

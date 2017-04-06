#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string as= "bdfhijklt";
	string de= "gjpqy";
	string all=as+de;
	//cout<<all<<endl;
	
	ifstream ifs("../data/9_49_resource.txt");
	
	vector<string> stock;
	
	string temp;
	while(ifs>>temp)
	{
		if(temp.find_first_of(all)==std::string::npos) 
		{
			stock.push_back(temp);			
		}						
	}
	
	for(auto x : stock)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	vector<int> leng;
	for(auto iter=stock.begin();iter!=stock.end();++iter)
	{
		auto str=*iter;
		leng.push_back(str.size());
	}
	
	auto a=*max_element(leng.begin(),leng.end());
	
	for(auto x:stock)
	{
		if(x.size() == a)
		{
			cout<<x<<" ";
		}
	}
	
	return 0;
}

#include <list>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
	ifstream ifs("../data/letter.txt");
	string s1;
	
	map<string, size_t> m1;
	set<string> exclude = {"The", "But", "And", "Or", "An", "A","the", "but", "and"," ","or", "an", "a"};
	set<string> exc2={",","."};
	
	while(ifs>>s1)
	{
		if(exclude.find(s1)==exclude.end())
		{
			
			transform(s1.begin(),s1.end(),s1.begin(),::tolower);
			auto ch=*(s1.end()-1);
			string x{ch};			
						
			if(exc2.find(x)!=exc2.end())
			{
				s1.erase(s1.end()-1);				
			}
			
			++m1[s1];
		}
	}
	
	for(const auto & x: m1)
	{
		cout<<x.first<<" occurs "<<x.second<<" "<<((x.second>0)?"times":"time")<<endl;
	}
	return 0;
}

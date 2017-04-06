#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <string>
#include <map>
#include <sstream>
using namespace std;

map<string, string> build_map(ifstream &ifs_map)
{
	string abbre, formal_word;
	map<string, string> m;
	while(ifs_map>>abbre && getline(ifs_map,formal_word))
	{
		if(formal_word.size()>0)
		{
			m[abbre]=formal_word.substr(1);
		}
		else
		{
			cerr<<"No formal words match abbre."<<endl;
		}
	}
	return m;
}

const string & transf_str(const string & s, map<string, string> m)
{
	auto iter=m.find(s);
	if(iter==m.end())
	{
		return s;
	}
	else
	{
		return (iter->second);
	}
}

void func_11_33(ifstream &ifs, ifstream & ifs_map)
{
	auto m1=build_map(ifs_map);
	string s1;
	while(getline(ifs,s1))
	{
		istringstream iss(s1);
		string temp;
		bool mark=1;
		while(iss>>temp)
		{
			
			if(mark==1)
			{
				mark=0;
			}
			else
			{
				cout<<" ";
			}
			cout<<transf_str(temp, m1);
		}
		cout<<endl;		
	}
	
}

int main()
{
	ifstream ifs("../data/word_trans.txt");
	ifstream ifs_map("../data/word_abbre_formal.txt");
	
	func_11_33(ifs,ifs_map);
	
	return 0;
}

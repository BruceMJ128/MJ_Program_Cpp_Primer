#include <algorithm>
#include <list>
#include <iostream>
#include <fstream>
using namespace std;

void f_10_42(list<string> lst)
{
	lst.sort();
	lst.unique();
}

int main()
{
	ifstream ifs("../data/letter.txt");
	string s1;
	list<string> lst;
	
	while(ifs>>s1)
	{
		lst.push_back(s1);
	}
	
	f_10_42(lst);
	
	for(auto x: lst)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	return 0;
	
}


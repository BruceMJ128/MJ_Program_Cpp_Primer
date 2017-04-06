#include <list>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	list<string> ls;
	string s;
	
	auto iter=ls.begin();
	
	while(cin>>s)
	{
		ls.insert(iter, s);
		iter=ls.end();
	}
	
	for(auto & x :ls)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	return 0;
}

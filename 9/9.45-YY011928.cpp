#include <iostream>
#include <string>

using namespace std;

string func_9_45( string & name, const string & pre, const string & post)
{
	name.insert(name.begin(),pre.begin(),pre.end());
	name.append(post);
	return name;
}

int main()
{
	string name{"Bruce Miao"};
	string formal_name = func_9_45(name,"Mr " ," Jr.");
	
	cout<<name<<endl;
}

#include <vector>
#include <list>
#include <iostream>

using namespace std;

int main()
{
	list<char *> lc={"the", "love", "for", "you"};
	vector<string> vs;
	vs.assign(lc.begin(),lc.end());
	
	for(auto &x : vs)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	return 0;
}

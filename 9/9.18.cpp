#include <string>
#include <deque>
#include <iostream>

using namespace std;

int main()
{
	deque<string> ds;
	string temp1;
	while(cin>>temp1)
	{
		ds.push_back(temp1);
	}
	
	for(auto & x :ds)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	return 0;
}

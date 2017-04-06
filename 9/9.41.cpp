#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	vector<char> vec{'H','E'};
	
	for(auto x: vec)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	string s1;
	
	for(auto iter=vec.begin();iter!=vec.end();++iter)
	{
		s1.push_back(*iter);
	}
	
	cout<<s1<<endl;
	
	return 0;
}

#include <algorithm>
#include <string>
#include <iterator>
#include <iostream>
using namespace std;

bool pa_10_13(const string & s1)
{
	if(s1.size()>4)
			return true;
	else 
			return false;
}

bool isShorter(const string &s1, const string &s2)
{
	return s1.size()<s2.size();
}

int main()
{
	vector<string> vec{ "the","quick","red","fox","jumps","over","the","slow","red","turtle"};
	stable_sort(vec.begin(),vec.end(),isShorter);
	
	for(auto x: vec)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	auto iter=partition(vec.begin(),vec.end(),pa_10_13);
	
	for(auto temp=vec.begin(); temp!=iter;++temp)
	{
		cout<<*temp<<" ";
	}
	cout<<endl;
	
	return 0;
	
}



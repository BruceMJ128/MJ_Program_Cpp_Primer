#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> vec;
	
	cout<<vec.size()<<" "<<vec.capacity()<<endl;
	
	for(int i=0; i!=10;i++)
	{
		vec.push_back(i);
	}

	
	cout<<vec.size()<<" "<<vec.capacity()<<endl;
	
	for(int i=0; i!=7;i++)
	{
		vec.push_back(i);
	}
	
	cout<<vec.size()<<" "<<vec.capacity()<<endl;
	
	for(int i=0; i!=16;i++)
	{
		vec.push_back(i);
	}
		auto iter=vec.end();
	--iter;
	cout<<*iter<<endl;

	cout<<vec.size()<<" "<<vec.capacity()<<endl;
	
	vec.resize(30);
	for(auto x:vec)
	{
		cout<<x<<" ";
	}
	cout<<endl;

	
	cout<<vec.size()<<" "<<vec.capacity()<<endl;
	
	vec.push_back(64);
	cout<<vec.size()<<" "<<vec.capacity()<<endl;
	
	return 0;
}

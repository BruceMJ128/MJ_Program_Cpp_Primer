#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	vector<int> ivec1, ivec2; 
	int cnt = 10;
	
	while (cnt > 0)
	{
		ivec1.push_back(cnt--);
	}
	
	cnt =10;
	
	while (cnt > 0)
	{
		ivec2.push_back(--cnt); 
	}
	

	cout<<"vector ivec1 is "<<endl;
	
	for(vector<int>::iterator iter1=ivec1.begin();iter1!=ivec1.end();++iter1)
	{
		cout<<*iter1<<" ";
	}
	cout<<endl;	
	
	
	cout<<"vector ivec2 is "<<endl;
	
	for(vector<int>::iterator iter2=ivec2.begin();iter2!=ivec2.end();++iter2)
	{
		cout<<*iter2<<" ";
	}
	cout<<endl;	
	
	
	return 0;
}

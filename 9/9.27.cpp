#include <vector>
#include <forward_list>
#include <iostream>

using namespace std;

int main()
{
	int ia[]={0,1,1,2,3,5,8,13,21,55,89};
	vector<int> v1(ia,end(ia));
	forward_list<int> flst(v1.begin(),v1.end());
	
	auto curr=flst.begin();
	auto prev=flst.before_begin();
	
	while(curr!=flst.end())
	{
		if(*curr & 0x1)
		{
			curr=flst.erase_after(prev);
		}
		else
		{
			
			prev=curr;
			++curr;
		}
	}
	
	for(auto x : flst)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	return 0;
}

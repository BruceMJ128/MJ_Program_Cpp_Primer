#include <list>
#include <forward_list>
#include <iostream>

using namespace std;

int main()
{
	/*
	list<int> l1{0,1,1,2,3,5,8,13,21,55,89};
		
	for(auto iter=l1.begin();iter!=l1.end(); )
	{
		if(*iter & 1)
		{
			iter=l1.insert(iter,*iter);
			++iter;
			++iter;			
		}
		else
		{
		    iter=l1.erase(iter);
		}
	}
	
	cout<<"list_1 is ";
	for(auto x:l1)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	*/
	
	forward_list<int> fl1{0,1,1,2,3,5,8,13,21,55,89};

	
	for(auto prev=fl1.before_begin(), curr=fl1.begin(); curr!=fl1.end(); )
	{
		if(*curr & 1)
		{
			curr=fl1.insert_after(prev,*curr);
			prev = ++curr;
			++curr;
			//advance(prev, 2);
            //advance(curr, 2);
		}
		else
		{
			curr=fl1.erase_after(prev);						
		}
	}
	
	cout<<"forward_list_1 is ";
	for(auto x:fl1)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	return 0;
}

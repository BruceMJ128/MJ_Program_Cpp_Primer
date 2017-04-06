#ifndef Self_9_28_h
#define Self_9_28_h

#include <string>
#include <forward_list>
#include <iostream>

using namespace std;

void func_9_28(forward_list<string> & flst, const string & s1, const string & s2)
{

	auto prev=flst.before_begin();
	for(auto curr=flst.begin(); curr!=flst.end(); prev=curr++)
	{
		if(*curr ==s1)
		{
			flst.insert_after(curr,s2);
			return ;
		}
		
	}
	
	flst.insert_after(prev,s2);	
}

#endif

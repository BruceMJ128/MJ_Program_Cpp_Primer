#ifndef Self_9_51_trans1_h
#define Self_9_51_trans1_h

#include <vector>
#include <string>
#include <iostream>

using namespace std;

unsigned trans1(const string & m)
{
	vector<string> vec{"January","February","March","April","May","June","July","August","September","October","November","December"};
	vector<string> vec2{"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
	unsigned r;
	for(unsigned i=0; i!=vec.size(); ++i)
	{
		if(m==vec[i] || m==vec2[i])
		{
			r=i;
			break;
		}		
		else if(stoul(m))
		{
			r=stoul(m)-1;
		}
		
	}
	return r+1;
}

#endif

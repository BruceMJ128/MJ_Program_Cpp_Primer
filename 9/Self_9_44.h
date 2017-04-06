#include <string>
#include <iostream>
//#include <algorithm>  
#include <iterator>

using namespace std;

void func_9_44( string & s, const string & oldVal, const string & newVal)
{
	
	if (s.find(oldVal)==std::string::npos) 	return;
	
	for(auto iter=s.begin();iter!=s.end();++iter)
	{
				
		if(*iter==oldVal.front()) 
		{
			if(std::distance(iter,s.end())<std::distance(oldVal.begin(),oldVal.end())) break;
			
			if(string{iter, iter+oldVal.size()}==oldVal);
			{
				
				size_t dis=std::distance(s.begin(),iter);
				s.replace(iter, (iter+oldVal.size()),newVal);
				
				iter=std::next(s.begin(),dis+newVal.size()-1);
			}
		}
		else
		{
			continue;
		}
	}
	
    
}


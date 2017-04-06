#include <string>
#include <iostream>
//#include <algorithm>  
#include <iterator>

using namespace std;

void func_9_43( string & s, string oldVal, string newVal)
{
	for(auto i=0;i!=s.size();++i)
	{
		cout<<i<<endl;
		
		
		if(s.find(oldVal)==std::string::npos)
		{
			break;
		}
		else
		{
			auto dis=s.find(oldVal);
			auto temp=std::next(s.begin(), dis);  
			s.erase(temp, temp+oldVal.size());  
			s.insert(temp, newVal.begin(),newVal.end());
		
		}
		
	}
	cout<<endl;
}

	/*
	if (s.find(oldVal)==std::string::npos) 	return;
	
	for(auto iter=s.begin();iter!=s.end();++iter)
	{
		//if(s.find(oldVal)==std::string::npos) break;
		
		if(*iter==oldVal.front()) 
		{
			if(std::distance(iter,s.end())<std::distance(oldVal.begin(),oldVal.end())) break;
			
			if(string{iter, iter+oldVal.size()}==oldVal);
			{
				size_t dis=std::distance(s.begin(),iter);
				s.erase(iter, iter+oldVal.size());
				s.insert(iter, newVal.begin(),newVal.end());
				iter=std::next(s.begin(),dis+newVal.size()-1);
			}
		}
		else
		{
			continue;
		}
	}
	/*
	 for (auto beg = s.begin(); beg != s.end(); ++beg) {
    	if(s.find(oldVal)==std::string::npos) break;
        if (*beg != oldVal.front()) continue;
        if (std::distance(beg, s.end()) < std::distance(oldVal.begin(), oldVal.end()))
            break;
        if (string{beg, beg + oldVal.size()} == oldVal) {
            auto pos = std::distance(s.begin(), beg);
            s.erase(beg, beg + oldVal.size());
            s.insert(beg, newVal.cbegin(), newVal.cend());
            beg = std::next(s.begin(), pos + newVal.size() - 1);
        }
    }
    */
    
    


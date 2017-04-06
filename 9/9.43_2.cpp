//
//  ex9_44.cpp
//  Exercise 9.44
//
//  Created by pezy on 12/4/14.
//  Copyright (c) 2014 pezy. All rights reserved.
//
//  @Brief  Rewrite the previous function using an index and replace.
//  @See    9.43

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::prev;

void Replace(string& s, string const& oldVal, string const& newVal)
{
	int x=s.size()/oldVal.size() +1;
    for (int i = 0; i != x ; ++i)
    {
    	if(s.find(oldVal)==std::string::npos)
    	{
    		break;
		}
		else
		{
			s.replace(s.find(oldVal),oldVal.size(),newVal);		
		}
	}
        
}

int main()
{
    string str{"tho hard, life is beautiful."};
    Replace(str, "tho", "mark");
    cout << str << endl;
}

#include <fstream>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

void func1(const string & filename, vector<string> & v1)
{
	ifstream ifs1(filename);
	
	if(ifs1)
	{
		string temp;
		while(std::getline(ifs1,temp))
		{
		    v1.push_back(temp);
		}
	}	
};



#include "StrBlob.h"
#include <memory>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string s;
	ifstream ifs("../data/book.txt");
	vector<string> vec;
	shared_ptr<vector<string>> p1=make_shared<vector<string>>(vec);
	StrBlob SB1;
	
	while(ifs>>s)
	{
		SB1.push_back(s);
	}
	
	StrBlobPtr SBP1(SB1);
		
	for(StrBlobPtr iter=SB1.begin(); iter!=SB1.end(); iter.incr())
	{
		cout<<iter.deref()<<endl;
	}
		
	return 0;	
}

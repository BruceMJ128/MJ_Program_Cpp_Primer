//#include "ConstStrBlob.h"
#include <memory>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>

#include "ex12_22.h"

using namespace std;

ConstStrBlobPtr StrBlob::begin() const // should add const
{
    return ConstStrBlobPtr(*this);
}
ConstStrBlobPtr StrBlob::end() const // should add const
{
    return ConstStrBlobPtr(*this, data->size());
}



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
	
	const StrBlob SB2(SB1);
	
	ConstStrBlobPtr CSBP(SB2);
	
	for(ConstStrBlobPtr iter=SB1.begin();iter !=SB1.end(); iter.incr())
	{
		cout<<iter.deref()<<endl;
	}
		
	return 0;	
}

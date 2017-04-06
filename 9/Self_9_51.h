#ifndef Self_9_51_h
#define Self_9_51_h

#include <vector>
#include <string>
#include <iostream>
#include "Self_9_51_trans1.h"

using namespace std;

struct TIME
{
	friend std :: ostream &print (std :: ostream&, TIME&);
	friend std :: istream &read (std :: istream&, TIME&);
	friend unsigned trans1(const string & m);
	
	public:
		unsigned int year;
		unsigned int month;
		unsigned int day;
		//const string & m;
	public:
		TIME() = default;
		TIME(const string & m, unsigned d, unsigned y): year(y), month( trans1(m) ), day(d) { }
		TIME(unsigned int d,unsigned int m, unsigned int y):year(y),month(m),day(d) {  }
						
};

std::ostream &print (std :: ostream& os, TIME& T)
{
	os<<T.year<<" "<<T.month<<" "<<T.day<<endl;
	return os;
}

std::istream &read(std::istream & is, TIME & T)
{
	string  m{""}, temp_d{""}, temp_y{""};
	is>>m>>temp_d>>temp_y;
	
	T.month = trans1(m);
		
	if(stoul(temp_d))
	{
		T.day = stoul(temp_d);
	}
	
	if(stoul(temp_y))
	{
		T.year = stoul(temp_y);
	}
	
	return is;
}

/*
unsigned trans1(const string & m)
{
	vector<string> vec{"January","February","March","April","May","June","July","August","September","October","November","December"};
	
	unsigned r;
	for(unsigned i=0; i!=vec.size(); ++i)
	{
		if(m==vec[i])
		{
			r=i;
			break;
		}
	}
	return r+1;
}
*/
#endif

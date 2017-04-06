#include "Sales_data.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compareIsbn(Sales_data sd1, Sales_data sd2)
{
	return sd1.isbn()<sd2.isbn();
}

int main()
{
	const string s1{"isbn20160903"}, s2{"isbn20150708"}, s3{"20170809"};
	Sales_data sd1(s1), sd2(s2), sd3(s3);
	
	vector<Sales_data> vec{sd1, sd2, sd3};
	stable_sort(vec.begin(),vec.end(),[](Sales_data sd1, Sales_data sd2){ return sd1.isbn()<sd2.isbn() ;});
	
	for(auto x: vec)
	{
		cout<<x.isbn()<<" ";
	}
	cout<<endl;
	
	return 0;
	
}


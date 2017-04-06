#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
	Sales_item book;
	cout<<"Enter transaction: "<<std::endl;
	while (cin>>book)
	{
		cout<<"ISBN, Book sold copies, Sales volume, price"<<endl;
		std::cout<<book<<std::endl;
	}
	return 0;
} 

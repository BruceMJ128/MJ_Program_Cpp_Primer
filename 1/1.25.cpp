#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
	Sales_item total, trans1, trans2;
	int amount;            // 纪录交易次数 
	cout<<"Enter total transaction: "<<endl;
	
	if(cin>>trans1)
	{
		total=trans1;
		amount=1;
		while(cin>>trans2)
		{
			if(trans1.isbn()==trans2.isbn())
			{
				total +=trans2;
				++amount;
			}
			else
			{
				cout<<"Different ISBN.";
				cout<<endl;
				cout<<"The book sales info of previous ISBN is "<<total;
				cout<<endl;
				cout<<"The data item number is "<<amount<<endl;
				return -1;
			}			
		}
		cout<<"The book sales info is "<<total<<endl;
		cout<<"The sales data item number is "<<amount<<endl;
	}
	else
	{
		cerr<<"No data!"<<endl;
		return -1;
	}
	return 0;	
}

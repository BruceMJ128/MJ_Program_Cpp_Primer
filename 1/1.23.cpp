#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
	Sales_item total, trans;
	cout<<"Enter total transaction: "<<endl;
	
	if(cin>>total) // ����ֵ 
	{
		while(cin>>trans) //����2,3,4,...n��ֵ 
		{
			if(total.isbn()==trans.isbn())
			{
				total += trans;
			}
			else
			{
				cout<<"Different ISBN"<<endl;
				return -1;
			}
		}
		cout<<"Total transaction is"<<total<<endl;
	}
	else
	{
		cout<<"No data"<<endl;
		return -1;
	}
	return 0;
}

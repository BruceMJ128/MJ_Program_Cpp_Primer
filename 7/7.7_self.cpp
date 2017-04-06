#include <iostream>
#include <string>
#include "exc_7_6.h"

using namespace std;

int main()
{
	Sales_data total, temp;
	
	cout<<"Input bookNo, sales volumen and price"<<endl;
	
	if(read(std::cin,total))
	{
		while(read(std::cin,temp))
		{
			if(total.bookNo==temp.bookNo)
			{
				total = add(total, temp);
			}
			else
			{
				cout<<"Previous book info, bookNo, sales volume and revenue:"<<endl;
				print(std::cout, total);
				total = temp;
			}
		}
		cout<<"The total book info, bookNo, sales volume, revenue:"<<endl;
		print(cout, total);
	}
	else
	{
		cerr<<"No data!"<<endl;
		return -1;
	}
	
	return 0;
}




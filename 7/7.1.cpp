#include <iostream>
#include <string>

using namespace std;

struct Sales_item
{
	string isbn;
	int qty;
	double revenue;
};

int main()
{
	Sales_item total;
	cout<<"Input book isbn, sales quantity and revenue."<<endl;
	if(cin>>total.isbn>>total.qty>>total.revenue)
	{
		Sales_item temp;
		while(cin>>temp.isbn>>temp.qty>>temp.revenue)
		{
			if(total.isbn==temp.isbn)
			{
				total.qty +=temp.qty;
				total.revenue += temp.revenue;
			}
			else
			{
				cout<<"Last sales info: "<<total.isbn<<" "<<total.qty<<" "<<total.revenue<<endl;
				total=temp;
			}
		}
		
		cout<<"Final result is "<<total.isbn<<" "<<total.qty<<" "<<total.revenue<<endl;
	}
	else
	{
		cerr<<"No data!"<<endl;
		return -1;
	}
	return 0; 
}

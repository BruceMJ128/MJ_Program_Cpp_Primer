#include <iostream>
#include <string>

using namespace std;

struct Sales_data
{
	string bookNo;
	int qty;
	double revenue;
	
	Sales_data& combine(const Sales_data& a, const Sales_data& b)
	{
		Sales_data temp1;
		if(a.bookNo == b.bookNo);
		{
				temp1.bookNo = a.bookNo;
				temp1.qty = a.qty + b.qty;
				temp1.revenue = a.revenue + b.revenue;
				return temp1;
		}
			
	}
	
	string isbn(const Sales_data & a)
	{
		return a.bookNo;
	}
};

int main()
{
	Sales_data a1, b1, c;
	//cin>>a1.bookNo>>a1.qty>>a1.revenue>>endl;
	cin>>b1.bookNo>>b1.qty>>b1.revenue>>endl;
	
	c=combine(a1, a2);
	cout<<c.bookNo<<" "<<c.qty<<" "<<c.revenue<<endl;
	
	string s1;
	s1=isbn(a1);
	cout<<s1<<endl;
	
	return 0;
	
}

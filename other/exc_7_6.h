#ifndef ex_7_6_h
#define ex_7_6_h

#include <string>
#include <iostream>

struct Sales_data
{
	std::string bookNo;
	int sales_volume =0 ;
	double revenue = 0.0;
	
	std::string const & isbn() const {return bookNo;};
	Sales_data & combine(const Sales_data&);
};

Sales_data& Sales_data::combine(const Sales_data &a)
{
	sales_volume +=a.sales_volume;
	revenue +=a.revenue;
	return *this;
}

Sales_data add(const Sales_data & a1, const Sales_data &a2)
{
	//sales_volume = a1.sales_volume + a2.sales_volume;
	//revenue = a1.revenue + a2.revenue;
	//return *this;
	
	Sales_data sum = a1;
	sum.combine(a2);
	return sum;
}

std::istream & read(std::istream & is, Sales_data & y)
{
	double price=0.0;
	is>> y.bookNo >> y.sales_volume >> price;
	y.revenue = y.sales_volume * price;
	return is;
}

std::ostream &print(std::ostream &os, const Sales_data & z)
{
	os<<z.bookNo<<" "<<z.sales_volume<<" "<<z.revenue<<std::endl;
	return os;
}


#endif


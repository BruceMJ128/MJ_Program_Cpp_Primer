#ifndef Sales_data_h
#define Sales_data_h

#include <string>
#include <iostream>

class Sales_data {
    friend std::istream& read(std::istream& is, Sales_data& item);
    friend std::ostream& print(std::ostream& os, const Sales_data& item);
    friend Sales_data add(const Sales_data& lhs, const Sales_data& rhs);

public:
    Sales_data() = default;
    Sales_data(const std::string& s) : bookNo(s) {}
    Sales_data(const std::string& s, unsigned n, double p) : bookNo(s), sales_volume(n), revenue(n * p)    {    }
    Sales_data(std::istream& is) { read(is, *this); }

    Sales_item& operator+=(const Sales_item&);
	std::string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data&);

private:
    inline double avg_price() const;

//private:
public:
    std::string bookNo;
    unsigned sales_volume = 0;
    double revenue = 0.0;
};



inline double Sales_data::avg_price() const
{
    return sales_volume ? revenue / sales_volume : 0;
}



Sales_data& Sales_data::combine(const Sales_data &a)
{
	sales_volume +=a.sales_volume;
	revenue +=a.revenue;
	return *this;
}

Sales_data add(const Sales_data & a1, const Sales_data &a2)
{
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

Sales_item& Sales_item::operator+=(const Sales_item& rhs) 
{
    units_sold += rhs.units_sold; 
    revenue += rhs.revenue; 
    return *this;
}

#endif


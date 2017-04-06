#include <set>
#include "Sales_data"
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	typedef bool(*compareType)(const Sales_data &lhs, const Sales_data &rhs);
	multiset<Sales_data, compareType> bookstore(compareIsbn);
	multiset<Sales_data, compareType>::iterator iter=bookstore.begin();
	
	return 0;
}

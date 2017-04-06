#include <iostream>
#include "Sales_item.h"
int main()
{ 
Sales_item book;// // 这里Sales_item的作用相当于int，起到定义的作用； read ISBN, number of copies sold, and sales price
std::cin >> book;// write ISBN, number of copies sold, total revenue, and average price
std::cout << book << std::endl;
return 0;
} 

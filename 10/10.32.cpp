#include <algorithm>
#include <vector>
#include "Sales_data.h"
#include <numeric>
#include <string>
#include <fstream>
using namespace std;

bool compareIsbn(Sales_data sd1, Sales_data sd2)
{
	return sd1.isbn()<sd2.isbn();
}

int main()
{
	ifstream ifs("../data/book.txt");
	Sales_data Sd_temp;
	vector<Sales_data> vec;
	
	while(read(ifs, Sd_temp))
	{
		vec.push_back(Sd_temp);
	}
	
	sort(vec.begin(),vec.end(),compareIsbn);
	
	for(auto iter=vec.begin(), iter2=iter;iter!=vec.end();iter=iter2)
	{
		iter2 = find_if(iter,vec.end(),[*iter2](Sales_data Sd){	return Sd.isbn()!=iter2 ->isbn();});
		Sales_data sum=accumulate(iter, iter2,Sales_data(iter->isbn()));
		print(cout,sum);
		
	}
		
	return 0;
}

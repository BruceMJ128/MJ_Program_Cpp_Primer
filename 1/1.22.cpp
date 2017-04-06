#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
	Sales_item book1, book2;
	cout<<"Enter total transaction: "<<endl;
	cin>>book1>>book2;
		
	if(book1.isbn()==book2.isbn())
	{	
	cout<<"The sum of total transaction is "<<endl;
	cout<<book1+book2<<endl;
    }
    else
    {
    	cout<<"the two transactions have different ISBN."<<endl;
    }
    	        
	return 0;
}

#include <fstream>
#include <iostream>
#include <string>
#include "Self_7_26.h"

using std::ifstream;
using std::cout;
using std::endl;
using std::cerr;

using namespace std;

int main(int a, char* x[])
{
	ifstream input("../data/book.txt");
	ofstream output;
	output.open("../data/8_7.txt", ofstream::app);
	//output.open("../data/8_7.txt");
	
    Sales_data total;
    if (read(input, total)) 
	{
        Sales_data trans;
        while (read(input, trans)) 
		{
            if (total.isbn() == trans.isbn())
            {
			    total.combine(trans);               
            }
            else {
            	print(cout, total) << endl;
            	print(output, total)<<"inside while 14:12"<<endl;;
            	
                total = trans;
            }
        }
        print(cout, total) << endl;
        print(output,total) <<endl;
    }   
    else {
        cerr << "No data?!" << endl;
    }

    output.close();
	return 0;
}

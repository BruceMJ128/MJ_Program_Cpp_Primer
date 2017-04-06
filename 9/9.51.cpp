#include <iostream>
#include <string>
#include <vector>
#include "Self_9_51.h"

using namespace std;

int main()
{
	TIME t1;
	cout<<"Input the time: "<<endl;
	read(cin, t1);
	cout<<"Year Month Day :"<<endl;
	print(cout,t1);
	
	return 0;
}


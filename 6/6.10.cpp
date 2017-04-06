#include <iostream>

using namespace std;

int exchange (int val1, int val2)
{
	int *p1=&val1, *p2=&val2;
	int a;
	a=*p1;
	*p1=val2;   //val1的值被改变为val2 
	*p2=a;	    //val2值被改变为a，即val1 
}

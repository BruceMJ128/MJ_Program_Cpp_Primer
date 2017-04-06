#include <iostream>

using namespace std;

int main()
{
	int errNumb = 0;
	int *const curErr = &errNumb; // curErr is a constant pointer
	
	cout<<"1st stage: "<<*curErr<<endl;
	
	//curErr = curErr; // error: curErr is const
	*curErr = 1;    
	
	cout<<"2nd stage: "<<*curErr<<endl;
	
	return 0;
}

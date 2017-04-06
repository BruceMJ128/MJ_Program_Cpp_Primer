#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
	int a, b;
	
	cout<<"Input two int, a and b:"<<endl;

	while(cin>>a>>b)
{
	try
	{
		if(b==0)
		{
			throw runtime_error("divisor is 0"); 
		}
		cout<<static_cast<double> (a) /b<<endl;
		cout<<"input another two integer: "<<endl;
	}
	catch(runtime_error err1)
	{
		cout<<err1.what()<<endl;
		cout<<"Try Again? Enter y or n"<<endl;
		
		char x;
		cin>>x;
		if(!cin||x=='n')
		{
			break;
		}
		else
		{
		    cout<<"input another two integer: "<<endl;
		}
	}
}
		
	return 0;
}

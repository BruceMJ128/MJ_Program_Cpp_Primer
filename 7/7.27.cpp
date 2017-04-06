#include <iostream>
#include<string>
#include "Self_7_24.h"

using namespace std;

int main()
{
	Screen myScreen(5, 5, 'X');
	Screen temp;
	cout<<"Original myScreen is:"<<endl;
	myScreen.display(cout);
	cout<<endl;
	
	cout<<"myScreen.move(4,0).set('#').display(cout) is:"<<endl;
	myScreen.move(4,0).set('#').display(cout);
	temp=myScreen.move(4,0).set('#');
	
	cout<<endl<<"temp 1:"<<endl;
	temp.display(cout);
	
	cout << "\n";
	cout<<"myScreen is:"<<endl;
	myScreen.display(cout);
	cout <<"\n";
	
	return 0;
}

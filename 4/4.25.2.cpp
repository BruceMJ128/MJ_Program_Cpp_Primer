#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	const int size=80;

	char *p1, *p2;	

	string a1[size];
	string a2[size];
	
	cout<<"Input a1: "<<endl;
	cin>>a1;
	cout<<endl;
	
	cout<<"Input a2: "<<endl;
	cin>>a2;
	cout<<endl;	
	

	
	
	int result;
	result=strcmp(a1,a2);
	
	if(result<0)
	{
		cout<<"s2 is bigger than s1."<<endl;		
	}
	else if(result>0)
	{
		cout<<"s1 is bigger than s2."<<endl;	
	}
	else
	{
		cout<<"s1 is same as s2"<<endl;
	}
	
	delete [] p1;
	delete [] p2;
	
	return 0;
}

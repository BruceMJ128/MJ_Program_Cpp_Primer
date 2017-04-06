#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string a,b;
	getline(cin,a);
	cout<<endl;
	getline(cin,b);
	
	if(a==b)
	{
		cout<<"string a is equal as b."<<endl;
	}
	else if(a<b)
	{
		cout<<"bigger one is b."<<endl;
	}
	else
	{
		cout<<"bigger one is a."<<endl;
	}
	
	if(a.size()==b.size())
	{
		cout<<"length of string a is equal as b."<<endl;
	}
	else if(a.size()<b.size())
	{
		cout<<"longer one is b."<<endl;
	}
	else 
	{
		cout<<"longer one is a."<<endl;
	}
}

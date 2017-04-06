#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void revise_upper(string &s)
{
	string::size_type i;
	for (i=0; i!=s.size();++i)
	{
		s[i]=tolower(s[i]);
	}	
}

int main()
{
	string line;
	cout<<"Input the string line: "<<endl;
	getline(cin,line);
	cout<<"Original string content is: "<<'\n'<<line<<endl;
	
	revise_upper(line);
	cout<<"Revise string content is: "<<endl;
	cout<<line<<endl;
	
	return 0;	
}

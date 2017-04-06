#include <iostream>
#include <string>
#include <cctype>

using namespace std;

char judge_upper(const string &s)
{
	string::size_type i;
	for (i=0; i!=s.size();++i)
	{
		if(isupper(s[i]))
		{
			return 'y';
			break;
		}
	}
	
	if(i=s.size()-1)
	{
		return 'n';		
	}
}

int main()
{
	string line;
	cout<<"Input the string line: "<<endl;
	getline(cin,line);
	char result = judge_upper(line);
	cout<<"Whether the string has upper char, y or n? "<<endl;
	cout<<"Result is "<<result<<endl;
	
	return 0;	
}

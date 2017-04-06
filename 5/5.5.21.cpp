#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2;
	cout<<"Input some strings:"<<endl;
	
	while(cin>>s1)
	{
		if(!isupper(s1[0]))
		{
			continue;
		}
		else if(s1==s2)
		{
			cout<<"the repeating word is "<<s1<<endl;
			break;
		}
		else
		{
			s2=s1;
		}	
	}
	if(cin.eof())
		{
			cout<<"no words repeats"<<endl;
		}
	return 0;
}

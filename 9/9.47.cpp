#include <string>
#include <iostream>

using namespace std;

void func_9_47(const string &s1, const string &s2)
{
	for(auto i=0;i!=s1.size(); ++i)
	{
		auto temp=s1.substr(i, s1.size()-i);
		auto x=temp.find_first_of(s2);
		if(x==std::string::npos)
		{
			break;
		}
		else
		{
			cout<<"number is "<<temp[x]<<endl;
			i=i+x;
		}

	}
}

void func_9_47_abc(const string &s1, const string &s2)
{
	for(auto i=0;i!=s1.size(); )
	{
		auto temp=s1.substr(i, s1.size()-i);
		auto x=temp.find_first_not_of(s2);
		if(x==std::string::npos)
		{
			break;
		}
		else
		{
			cout<<"letter is "<<temp[x]<<endl;
			i=i+x+1;
		}

	}
}

int main()
{
	//func_9_47("ab2c3d7R4E6","0123456789");
	//func_9_47_abc("ab2c3d7R4E6","0123456789");
	
	string s1="ab2c3d7R4E6";
	string s2="0123456789";
	func_9_47(s1,s2);
	func_9_47_abc(s1,s2);
	
	return 0;
}

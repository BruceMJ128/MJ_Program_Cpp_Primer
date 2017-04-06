#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
	cout<<"Input string s1:"<<endl;
	string s1, s2;
	getline(cin,s1);
	
	/*while (getline(cin, s1))
	{
		cout << s1 << endl;
	}
	*/

	cout<<"string 1 is "<<s1<<endl;
	
		cout<<"Input string s2:"<<endl;
	getline(cin,s2);
	
	/*while (getline(cin, s1))
	{
		cout << s1 << endl;
	}
	*/

	cout<<"string 2 is "<<s2<<endl;
	
	if(s1<s2)
	{
		cout<<"s2 is bigger than s1."<<endl;		
	}
	else if(s1>s2)
	{
		cout<<"s1 is bigger than s2."<<endl;	
	}
	else
	{
		cout<<"s1 is same as s2"<<endl;
	}
	
	return 0;
}

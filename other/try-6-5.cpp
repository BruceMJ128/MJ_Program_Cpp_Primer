#include <iostream>
#include <string>

using namespace std;

int main()
{
	char a[]=" World!";
	string s="Hello";
	
	s +=a;
	
	cout<<s<<endl;
	
	return 0;
}

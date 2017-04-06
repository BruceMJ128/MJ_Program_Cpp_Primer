#include <iostream>
#include <string>

using namespace std;

int main(int x, char **pi)
{
	string s1, s2, s3;
	pi[0]=0;
	pi[1]="Hello";
	pi[2]="World";
	
	string temp;
	
	s1 =s1+pi[0];
		
	cout<<s1<<endl;
	
	return 0;
	
}

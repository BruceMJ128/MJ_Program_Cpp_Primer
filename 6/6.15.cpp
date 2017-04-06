#include <iostream>
#include <string>

using namespace std;

string::size_type find_char(const string &s, char c,string::size_type &occurs)
{
auto ret = s.size(); // position of the first occurrence, if any
occurs = 0; // set the occurrence count parameter
for (decltype(ret) i = 0; i != s.size(); ++i) {
if (s[i] == c) {
if (ret == s.size())
ret = i; // remember the first occurrence of c
++occurs; // increment the occurrence count
}
}
return ret; // count is returned implicitly in occurs
}

int main()
{
	string s1= "hello";
	string::size_type oc=0;
	string::size_type f=find_char(s1,'o',oc);
	
	cout<<"f is "<<f<<endl;
	cout<<"oc is "<<oc<<endl;
	
	return 0;
}

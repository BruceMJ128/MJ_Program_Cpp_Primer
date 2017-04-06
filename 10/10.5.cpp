#include <string>
#include <algorithm>
#include <iostream>
#include <list>
using namespace std;

int main()
{
	char a1[]="hello world";
	char a2[]="hello world";
	
	bool x=equal(begin(a1),end(a1),begin(a2));
	
	vector<char> vec1;
	vector<char*> vec2{a2};
	vector<char> vec3;
	
	list<char> li2;

	int len= sizeof(a1)/sizeof(a1[0]); 
	for(int i=0;i!=len;++i)
	{
		vec3.push_back(a1[i]);
		li2.push_back(a2[i]);
	}
	
	bool try_1=equal(vec3.begin(),vec3.end(),li2.begin());
	
	cout<<"try: "<<try_1<<endl;
	
	/*

	for(auto x:vec3)
	{
		cout<<x<<" ";
	}	
	cout<<endl;
	
	list<char*> li1{a2};
	
	bool y=equal(vec1.begin(),vec1.end(),vec2.begin());
	bool z=equal(li1.begin(),li1.end(),vec1.begin());
	
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<z<<endl;
	*/
	return 0;
}

#include <iostream>
#include <vector>
#include <iterator>
#include <string>

using namespace std;

int main()
{
	vector<string*> v1;
	string s1;
	
	cout<<"Enter some strings (Ctrl+z to end)"<<endl;
	
	while(cin>>s1)
	{
		string *ps1 =new string;   // 此时指针指向为空，指针并未指向一个对象。 
		cout<<*ps1<<"*ps1"<<endl;  
		//cout<<new string<<"new string"<<endl;
		*ps1 = s1;
		v1.push_back(ps1);
		//cout<<*ps1<<"*ps1"<<endl;
	}
	
	vector<string*>::iterator iter=v1.begin();
	
	while(iter!=v1.end())
	{
		cout<<**iter<<" "<<(**iter).size()<<endl;
		iter++;
	}
	
	// 释放动态string对象 
	
	iter = v1.begin();
	while(iter!=v1.end())
	{
		delete *iter;
		++iter;
	}
	
	return 0;
}

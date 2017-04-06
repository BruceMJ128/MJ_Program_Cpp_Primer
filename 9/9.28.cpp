#include <iostream>
#include "Self_9_28.h"
#include <forward_list>
#include <string>

using namespace std;

int main()
{
	forward_list<string> flst1{"my","baby","is","beautiful"};
	
	cout<<"flst1 (original):"<<endl;
	for(auto x:flst1)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	func_9_28(flst1,"cat","as Miaomiao.");
	
	for(auto x:flst1)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	return 0;
}

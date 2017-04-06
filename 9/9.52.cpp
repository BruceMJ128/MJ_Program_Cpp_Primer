#include <stack>
#include <deque>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	const string & s1="while (! intStack. empty () )";
	
	stack<char> sta1;
	char content='*';
	int mark=0;
	
	for(auto x: s1)
	{
		sta1.push(x);
		if(x=='(')
		{
			++mark;			
		}
		if(x == ')'&& mark>0)
		{
			while(sta1.top()!='(')
			{
				sta1.pop();
			}
			sta1.pop();  //删去最近的 （ 
			sta1.push(content);
			--mark;
		}		
	}
	
	string result;
	while(!sta1.empty())
	{
		result.insert(result.begin(),sta1.top());
		sta1.pop();
	}
	
	cout<<result<<endl;
	
	return 0;
}

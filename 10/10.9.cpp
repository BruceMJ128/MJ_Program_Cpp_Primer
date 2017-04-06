#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <string>
using namespace std;

void elimDups(vector<string> &word)
{
	
	sort(word.begin(),word.end());
	/*
	cout<<"sort:"<<endl;
	for(auto x:word)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	*/
	auto iter=unique(word.begin(),word.end());
	/*
	cout<<"unique:"<<endl;
	for(auto x:word)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	*/
	word.erase(iter,word.end());
	
}

int main()
{
	vector<string> vec{ "the","quick","red","fox","jumps","over","the","slow","red","turtle"};
		
	elimDups(vec);
	for(auto x:vec)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	return 0;
}

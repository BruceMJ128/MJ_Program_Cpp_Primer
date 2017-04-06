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

bool isShorter(const string &s1, const string &s2)
{
	return s1.size()<s2.size();
}

int main()
{
	vector<string> vec{ "the","quick","red","fox","jumps","over","the","slow","red","turtle"};
	
	
	elimDups(vec);
	cout<<"elimDups:"<<endl;
	for(auto x:vec)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	

	
	sort(vec.begin(),vec.end(),isShorter);
	
	cout<<"isShoter:"<<endl;
	for(auto x:vec)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	/*
	stable_sort(vec.begin(),vec.end(),isShorter);
	cout<<"stable_sort:"<<endl;
	for(auto x:vec)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	*/
	return 0;
}

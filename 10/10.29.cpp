#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <iterator>
using namespace std;

int main()
{
	ifstream  ifs("../data/letter.txt");
	istream_iterator<string> ifs_iter(ifs), eof;
	
	vector<string> vec;
	
	while(ifs_iter!=eof)
	{
		vec.push_back(*ifs_iter++);
	}
	
	for(auto x: vec)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	return 0;
	
}

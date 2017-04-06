#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string line;
	vector<string> vec1;
	ifstream input("../data/book.txt");
	
	while(getline(input, line))
	{
		vec1.push_back(line);
	}
	
	for(const auto& x : vec1)
	{
		istringstream in_str(x);
		string temp;
		while(in_str>>temp)
		{
			cout<<" in_str: "<<temp;
		}
		cout<<endl;
	}
	return 0;
}
	

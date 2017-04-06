#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void func1(const string & s1, vector<string> &v2)
{
	ifstream ifs1(s1);

	if(ifs1)
	{
		string temp;
		while(getline(ifs1, temp))
		{
			v2.push_back(temp);
		}
	}
};

int main()
{
	vector<string> vec;
	func1("../Onedrive/data/book.txt", vec);
	for(const auto& x : vec)
	{
		cout<<x<<endl;
	}
	return 0;
}

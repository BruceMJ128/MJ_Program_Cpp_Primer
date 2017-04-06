#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	map<string, vector<int>> m1;
	auto iter=m1.find("x");
	
	if(iter==m1.end())  cout<<"No found x"<<endl;
	
	return 0;
}

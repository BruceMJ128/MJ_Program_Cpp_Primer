#include <algorithm>
#include <string>
#include <iterator>
#include <iostream>
using namespace std;

int main()
{
	vector<string> vec{ "the","quick","red","fox","jumps","over","the","slow","red","turtle"};
	
	auto c1=count_if(vec.begin(),vec.end(),[](const string& s1) { return s1.size()>5;});
	
	cout<<c1<<endl;
	
	return 0;
	
}



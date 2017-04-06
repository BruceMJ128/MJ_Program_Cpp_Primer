#include <functional>
#include <string>
#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz)
{
   return s.size () >= sz;
}

int main()
{
	vector<string> vec{ "the","quick","red","fox","jumps","over","the","slow","red","turtle"};
	auto iter=find_if(vec.begin(),vec.end(),bind(check_size,_1,5));
	
	cout<<*iter<<endl;
	
	return 0;
}

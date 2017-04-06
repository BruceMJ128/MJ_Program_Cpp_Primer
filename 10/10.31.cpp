#include <iterator>
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;

int main()
{
	istream_iterator<int> is_iter(cin), eof;
	ostream_iterator<int> os_iter(cout, " ");
	vector<int> vec;
	
	while(is_iter!=eof)
	{
		vec.push_back(*is_iter++);
	}
	
	sort(vec.begin(),vec.end());
	unique_copy(vec.begin(),vec.end(),os_iter);
	//copy(vec.begin(),vec.end(),os_iter);
		
	return 0;
}

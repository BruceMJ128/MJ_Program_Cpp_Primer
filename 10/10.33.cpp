#include <iterator>
#include <algorithm>
#include <fstream>
#include <iostream> 

using namespace std;

int main()
{
	ifstream ifs("../data/input.txt") ;
	ofstream ofs_odd("../data/odd.txt"), ofs_even("../data/even.txt");
	
	istream_iterator<int> is_iter(ifs),eof;
	ostream_iterator<int> os_odd(ofs_odd, " "), os_even(ofs_even,"\n");
	
		
	for_each(is_iter, eof, [&os_odd, &os_even](int i){ *(i & 0x1 ? os_odd : os_even)++=i; });
	
	return 0;
}

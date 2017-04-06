#include <memory>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	unique_ptr<int> p(new int(1));
	//unique_ptr<int> q=p;
	cout<<*p<<endl;
	return 0;
}

#include <memory>
#include <new>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void process(std::shared_ptr<int> p)
{
	cout<<" point copies: "<<p.use_count()<<endl;
}

int main()
{
	shared_ptr<int> p(new int(42));
	cout<<p.use_count()<<endl;
	process(shared_ptr<int>(p.get()));
	process(p);
	cout<<p.use_count()<<endl;
	
	return 0;
}

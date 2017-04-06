#include <memory>
#include <iostream>

using namespace std;

int main()
{
	auto p=make_shared<int>(42);
	
	auto q=p.get();
	cout<<p.use_count()<<endl;	
	
	if (!p.unique())
            p. reset (new int (*p));
    cout<<p.use_count()<<endl;

    cout<<*q<<endl;
    delete q;
    cout<<*p<<endl;
	*p += 1;     
	
	cout<<p.use_count()<<endl;
	cout<<*p<<endl;
	
	return 0;
}

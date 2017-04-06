#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	const size_t n1=10;
	int a[n1], b[n1];
	
	for(size_t i=0;i!=n1;++i)
	{
		a[i]=i;
	}
	
	cout<<"array b is "<<endl;
	
	for(size_t j=0;j!=n1;++j)
	{
		b[j]=a[j];
		cout<<b[j]<<" ";
	}
	
	cout<<endl;
	
	vector<int> c(10,0),d(10,0);
	
	int i=0;
	for (vector<int>::iterator iter=c.begin();iter!=c.end();++iter, ++i)
	{
		*iter=i*2;
	}
	

	cout<<"vector d is "<<endl; 
	
	vector<int>::size_type k=0;

	for (vector<int>::iterator iter=d.begin();iter!=d.end();++iter, ++k)
	{
		*iter=c[k];
		cout<<*iter<<" ";
	}
	cout<<endl;
	
	return 0;
	
}

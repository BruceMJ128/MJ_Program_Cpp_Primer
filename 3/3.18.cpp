#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1;
	
	int a;
	
	cout<<"Input the data:"<<endl;
	
	while (cin>>a)
	{
		v1.push_back(a);
	}
	
	cout<<"The double of original data chain is shown below:"<<endl;
	
	for(vector<int>::iterator iter=v1.begin();iter!=v1.end();++iter)
	{
		*iter=2*(*iter);
		cout<<*iter<<" ";
	}
	cout<<endl;
	return 0;	
}

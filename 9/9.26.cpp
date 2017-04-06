#include <vector> 
#include <list>
#include <iostream>



using namespace std;

int main()
{
	int ia[]={0,1,1,2,3,5,8,13,21,55,89};
	int len= sizeof(ia)/sizeof(ia[0]);
	cout<<len<<endl;
		
	vector<int> v1;
		
	for(int i=0;i!=len;++i)
	{
		v1.push_back(ia[i]);
	}
	
	list<int> l1;
	
	for(int i=0;i!=len;++i)
	{
		l1.insert(l1.end(),ia[i]);
	}
	
	cout<<"list (original): ";
	
	for(auto x: l1)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	
	auto iter=v1.begin();
	while(iter!=v1.end())
	{
		if(*iter %2)
		{
			v1.erase(iter);			
		}
		else
		{
			++iter;
		}
	}
	
	cout<<"vector (adjusted): ";
		
	for(auto x: v1)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	
    for (auto it = l1.begin(); it != l1.end();)
        if (*it %2)
            ++it;
        else
            it = l1.erase(it);
	
	cout<<"list (adjusted):";
	for(auto x: l1)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	
	return 0;	
}

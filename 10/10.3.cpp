#include <numeric>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec;
	for(int i=0;i!=10;++i)
	{
		vec.push_back(i);
	}
	
	int sum=accumulate(vec.begin(),vec.end(),0);
	
	cout<<sum<<endl;
	return 0;
	
}

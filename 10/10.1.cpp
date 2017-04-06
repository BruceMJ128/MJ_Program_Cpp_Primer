#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec{1,2,1,3,4,4,5,6,3,3,3,4,56,1,2,2};
	int a=2;
	
	int co=count(vec.begin(),vec.end(),a);
	
	cout<<co<<endl;
	
	
	return 0;
	
}

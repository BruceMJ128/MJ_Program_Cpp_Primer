#include <vector>

using namespace std;

vector<int>::iterator func2(vector<int>::iterator iter1, vector<int>::iterator iter2, int i)
{
	
	for(vector<int>::iterator temp=iter1; temp!=iter2; ++temp)
	{
		if(*temp==i)
		{
			return temp;
		}
	}
	return iter2;
}

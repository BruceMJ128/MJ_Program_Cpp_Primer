#include <vector>

using namespace std;

bool func1(vector<int>::iterator iter1, vector<int>::iterator iter2, int i) 
{
	bool temp =0;
	while(iter1!=iter2)
	{
		if(*iter1==i)
		{
			temp =1;
			break;			
		}
		else
		{
			++iter;
		}
	}
	return temp;
}

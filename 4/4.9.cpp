#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	vector<int> a1, a2;
	
	cout<<"Input vector a1 (when enter completed, input -1):"<<endl;
	
	int temp1;
	cin>>temp1;
	
	vector<int>::iterator iter1=a1.begin();
	while(temp1!=-1)
	{
		//*iter1=temp1; //教训：在向量的总长不知道的情况下，慎用*iter，因为不知道能不能停止，并在运行中会报错 
		//++iter1;
		a1.push_back(temp1);
		cin>>temp1;
	}
	
	cout<<"Input vector a2 (when enter completed, input -1):"<<endl;
	
	int temp2;
	cin>>temp2;
	
	vector<int>::iterator iter2=a2.begin();
	while(temp2!=-1)
	{
		//*iter2=temp2;
		//++iter2;
		a2.push_back(temp2);
		cin>>temp2;
	}
	
	//检验是否相等
	if(a1.size()!=a2.size())
	{
		cout<<"vector a1 is not equal to a2, and the vector length is different."<<endl;
		return 0;
	} 
	
	iter1=a1.begin();
	iter2=a2.begin();
	
	int temp3=0; //临时判断数 
	
	while(*iter1==*iter2&&iter1!=a1.end()&&iter2!=a2.end())
	{
		++iter1;
		++iter2;
	}
	
	if(iter1==a1.end())
	{
		cout<<"vector a1 is equal to a2."<<endl;
	}
	else
	{
		cout<<"vector a1 is not equal to a2."<<endl;
	}
	return 0; 
}

#include <iostream>
using namespace std;

int main()
{
	cout<<"Enter two numnber:"<<endl;
	
	int v1, v2, max,min,i,count;
	cin>>v1>>v2;
	
	if(v1<=v2)
	{
		max=v2;
		min=v1;
	}
	else
	{
		max=v1;
		min=v2;
	}
	
	for (i=min, count=1;i<=max;++i,++count)
	{
		cout<<i<<" ";
		if(count%10==0) //%��ȡ���������ã�==���ж���䣨=�Ǹ�ֵ��䣩 
		{
			cout<<endl;
		}
	}
		
	std::cout << std::endl;
		
	return 0;
}

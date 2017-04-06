#include <iostream>
#include <string>
#include <bitset>
#include <vector>

using namespace std;
using std::bitset;

int main()
{
	bitset<32> b1;
	
	int a=1, b=2,c=0;
	b1[1]=1;
	b1[2]=1;
	
	for (int i=0;i!=32;++i)
	{
		if(i==a+b)
		{
			b1[i]=1; // ªÚ’ﬂ”√ b1.set(i) 
			c=a;
			a=b;
			b=c+b;			
		}
	}
	
	cout<<"b1 is "<<b1<<endl;
	
	bitset<32> b2(0x20212e);
	cout<<"b2 is "<<b2<<endl;
	
	
	
	return 0;
	
	
}

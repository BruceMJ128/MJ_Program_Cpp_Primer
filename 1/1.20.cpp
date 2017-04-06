#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout<<"Enter two numbers: "<<endl;
	
	int v1, v2, sum;
	cin>>v1>>v2;
	
	sum=(v1+v2)*abs(v1-v2)/2; // ÓÐµãË£Àµ£¬¹þ¹þ£¡£¡ 
	cout<<sum<<endl;
	
	
	
	return 0;
	
} 

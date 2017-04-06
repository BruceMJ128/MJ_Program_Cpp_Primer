#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1(10,1);
	vector<int>::iterator iter=v1.begin();
	//vector<int>::iterator iter0=(v1.begin())/2;               //error
	//vector<int>::iterator mid1=v1.begin+v1.end();	            //error
	vector<int>::iterator mid2=v1.begin()+v1.size();
	//vector<int>::iterator mid =(v1.begin() + v1.size() )/ 2;  //error
	
	return 0;
}

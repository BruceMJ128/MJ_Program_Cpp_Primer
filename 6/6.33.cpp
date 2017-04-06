#include <iostream>
#include <vector>

using namespace std;
using Iter=vector<string>::iterator; //垃圾用法，极容易出错 

bool output(Iter iter1, Iter end)
{
	if(iter1!=end)
	{
		cout<<*iter1<<" ";
		++iter1;
		output(iter1, end);
	}
	else
	{
		return 0;
	}
}

int main()
{
    vector<string> vec={"Hello"," ", "World!"};
       
    /*
	for(vector<string>::iterator iter2=vec.begin(); iter2!=vec.end();++iter2)
    {
    	cout<<*iter2;
    }
    cout<<endl;
    */
    output(vec.begin(), vec.end());
    return 0;
}

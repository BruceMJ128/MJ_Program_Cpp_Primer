#include <vector>
#include <string>
#include <iostream>

using namespace std;

int func_9_50_i(vector<string> v1)
{
	int sum;
	for(auto x: v1)
	{
		if(stoi(x))
		{
			sum += stoi(x);
		}
	}
	return sum;
}

double func_9_50_d(vector<string> v2)
{
	double sum;
	for(auto x: v2)
	{
		if(stod(x))
		{
			sum += stod(x);
		}
	}

	return sum;
}

int main()
{
	vector<string> vec;
	for(double i=1.1;i<1.7;i=i+0.1)
	{
		
		string s=to_string(i);
		vec.push_back(s);
	}	
	
	int x=func_9_50_i(vec);
	double y=func_9_50_d(vec);
	
	cout<<x<<endl;
	cout<<y<<endl;
	/*
	double sum;
	for(auto x: vec)
	{
		if(stod(x))
		{
			sum += stod(x);
			cout<<stod(x)<<" ";
		}
	}
	cout<<endl;
	
	cout<<sum<<endl;
	*/
	return 0;
}

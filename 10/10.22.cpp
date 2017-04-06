#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <iterator>
#include <functional>

using namespace std;
using namespace std::placeholders;


void elimDups(vector<string> &vec)
{
	sort(vec.begin(),vec.end());
	auto iter=unique(vec.begin(),vec.end());
	vec.erase(iter, vec.end()); 
}

bool comp(const string &s, vector<string>::size_type sz)
{
	//cout<<s<<"s.size(): "<<s.size()<<", sz: "<<sz<<endl;
	return s.size()<sz;
	
}

void biggies(vector<string> &vec, vector<string>::size_type sz)
{
    elimDups(vec); 
    stable_sort(vec.begin(),vec.end(), [](const string &s1, const string &s2) {return s1.size()<s2.size(); } );     
    
    for(auto x: vec)
    {    	cout<<x<<" ";	}
	cout<<endl;
    
    //auto iter= stable_partition(vec.begin(),vec.end(),[sz](const string&s){ return s.size()<sz;});
    
    auto iter = stable_partition(vec.begin(),vec.end(),bind(comp, _1, sz ));
    
	auto count = vec.end()-iter; 
	
	cout<<count<<endl;
	
	for(auto temp=iter;temp!=vec.end();++temp)
	{
		cout<<*temp<<" ";
		cout<<(*temp).size()<<endl;
	}
	cout<<endl;
	
	/* 
    cout<<"word length longer than "<<sz<<" include: "<<endl;    
    for_each(iter,vec.end(),[](const string &s) {cout<<s<<" ";}); 
    cout<<endl;
    */
}

int main()
{
	vector<string> vec{ "the","quick","red","fox","jumps","over","the","slow","red","turtle"};		
	biggies(vec, 4);
	
	return 0;
}

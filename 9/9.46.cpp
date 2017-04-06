#include <iostream>
#include <string>

using namespace std;

std::string func_9_45( const std::string& name, const std::string& pre, const std::string& post)
{
    auto ret = name;
    ret.insert(0, pre);
    ret.insert(ret.size(), post);

    return ret;
}


int main()
{
	string formal_name = func_9_45("miao","Mr " ," Jr.");
	
	cout<<formal_name<<endl;
}




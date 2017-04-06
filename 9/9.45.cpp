#include <iostream>
#include <string>

using namespace std;

std::string func_9_45( const std::string& name, const std::string& pre, const std::string& su)
{
    auto ret = name;
    ret.insert(ret.begin(), pre.begin(), pre.end());
    ret.append(su);

    return ret;
}

/*
string func_9_45( const string & name, const string & pre, const string & post)
{
	string temp = name;
	
	//temp.insert(temp.begin(),pre.begin(),pre.end());
	temp.append(post);
	return temp;
}
*/
int main()
{
	string name{"Bruce Miao"};
	string formal_name = func_9_45("miao","Mr " ," Jr.");
	
	cout<<formal_name<<endl;
}

//inline std::string func_9_45(const std::string& name, const std::string& pre, const std::string& su)


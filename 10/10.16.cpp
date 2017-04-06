#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <iterator>
using namespace std;

void elimDups(vector<string> &vec)
{
	sort(vec.begin(),vec.end());
	auto iter=unique(vec.begin(),vec.end());
	vec.erase(iter, vec.end()); 
}

void biggies(vector<string> &vec, vector<string>::size_type sz)
{
    elimDups(vec); //将w o r d s 按字典序排序，删除重复单词
    stable_sort(vec.begin(),vec.end(), [](const string &s1, const string &s2) {return s1.size()<s2.size(); } );      // 按长度排序， 长度相同的单词维持字典序
    auto iter= find_if(vec.begin(), vec.end(), [sz](const string &s1) {return s1.size()>=sz; }); // 获取一^个迭代器，指向第一个满足size ()>= s z 的元素
    auto count = vec.end()-iter;  // 计算满足size >= s z 的元素的数目
    cout<<"word length longer than "<<sz<<" include: "<<endl;
    
    for_each(iter,vec.end(),[](const string &s) {cout<<s<<" ";}); // 打印长度大于等于给定值的单词，每个单词后面接一个空格
    cout<<endl;
}

int main()
{
	vector<string> vec{ "the","quick","red","fox","jumps","over","the","slow","red","turtle"};
	
	
	biggies(vec, 4);
	
	return 0;
}

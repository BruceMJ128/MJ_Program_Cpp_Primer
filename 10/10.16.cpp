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
    elimDups(vec); //��w o r d s ���ֵ�������ɾ���ظ�����
    stable_sort(vec.begin(),vec.end(), [](const string &s1, const string &s2) {return s1.size()<s2.size(); } );      // ���������� ������ͬ�ĵ���ά���ֵ���
    auto iter= find_if(vec.begin(), vec.end(), [sz](const string &s1) {return s1.size()>=sz; }); // ��ȡһ^����������ָ���һ������size ()>= s z ��Ԫ��
    auto count = vec.end()-iter;  // ��������size >= s z ��Ԫ�ص���Ŀ
    cout<<"word length longer than "<<sz<<" include: "<<endl;
    
    for_each(iter,vec.end(),[](const string &s) {cout<<s<<" ";}); // ��ӡ���ȴ��ڵ��ڸ���ֵ�ĵ��ʣ�ÿ�����ʺ����һ���ո�
    cout<<endl;
}

int main()
{
	vector<string> vec{ "the","quick","red","fox","jumps","over","the","slow","red","turtle"};
	
	
	biggies(vec, 4);
	
	return 0;
}

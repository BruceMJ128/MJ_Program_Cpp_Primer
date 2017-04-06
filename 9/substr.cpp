#include<string>
#include<iostream>
using namespace std;
main()
{
string s("12345asdf");
string a=s.substr(4,2);       //获得字符串s中 从第0位开始的长度为5的字符串//默认时的长度为从开始位置到尾
cout<<a<<endl;
return 0;
}

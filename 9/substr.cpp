#include<string>
#include<iostream>
using namespace std;
main()
{
string s("12345asdf");
string a=s.substr(4,2);       //����ַ���s�� �ӵ�0λ��ʼ�ĳ���Ϊ5���ַ���//Ĭ��ʱ�ĳ���Ϊ�ӿ�ʼλ�õ�β
cout<<a<<endl;
return 0;
}

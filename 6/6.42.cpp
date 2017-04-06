#include <iostream>
using namespace std;

string make_plural(size_t ctr, const string &word, const string &ending="s")
{
return (ctr > 1) ? word + ending : word;
}

int main()
{
	string a1="success", a2="failure";
	
	size_t ctr1=a1.size(), ctr2=a2.size();
	
	cout<<a1<<" "<<make_plural(ctr1,a1,"es" )<<endl;
	cout<<a2<<" "<<make_plural(ctr2,a2, "s")<<endl;
	
	return 0;
	
	
}

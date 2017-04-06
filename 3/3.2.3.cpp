#include <iostream>
#include <string>
using namespace std;

int main()
{
string st("The expense of spirit\n");
cout << "The size of \" " << st <<" is " << st.size()
<< " characters, including the newline" << endl;

string str("some string");
for (string::size_type ix = 0; ix != str.size(); ++ix)
cout << str[ix] << endl;

return 0;

}

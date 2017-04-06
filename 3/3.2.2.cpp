#include <iostream>
#include <string>
using namespace std;

int main()
{
/*string s; // empty string
cin >> s; // read whitespace-separated string into s
cout << s << endl; // write s to the output

string s1, s2;
cin >> s1 >> s2; // read first input into s1, second into s2
cout << s1 << s2 << endl; // write both strings

string word;
// read until end-of-file, writing each word to a new line
while (cin >> word)
{
	cout << word << endl;
}*/

string A;
// read line at time until end-of-file
while (getline(cin, A))
cout << A << endl;

return 0;
}


#include <iostream>
#include <string>
/* Program for illustration purposes only:
* It is bad style for a function to use a global variable and then
* define a local variable with the same name
*/
std::string s1 = "hello"; // s1 has global scope
int main()
{
std::string s2 = "world"; // s2 has local scope
// uses global s1; prints "hello world"
std::cout << s1 << " " << s2 << std::endl;
int s1 = 42; // s1 is local and hides global s1
// uses local s1;prints "42 world"
std::cout << s1 << " " << s2 << std::endl;
return 0;
}

#include <iostream>

const int j = 0, i=0; // error: i is uninitialized const

int main()
{
	int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
sum += i;
std::cout << i << " " << sum << std::endl;

return 0;

}

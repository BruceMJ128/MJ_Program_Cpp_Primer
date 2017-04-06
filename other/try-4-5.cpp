#include <iostream>

using namespace std;

int main()
{

const double *cptr;
double dval = 3.14159; // dval is not const
cptr = &dval;
//*cptr = 3.14159; // error: 不能用改方法 修改const型指针 cptr指向的对象
double *ptr = &dval; // ok: ptr points at non-const double
*ptr = 2.72; // ok: ptr is plain pointer
cout <<"1st stage: "<< *cptr<<endl; // ok: prints 2.72

double dval2 =1;
cptr = &dval2;  // OK, cptr被修改为指向 另一个const型数据 dval2
cout <<"2nd stage: "<< *cptr<<endl; 

return 0;
}

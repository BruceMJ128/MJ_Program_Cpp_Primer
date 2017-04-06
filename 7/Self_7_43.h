#ifndef Self_7_43_h
#define Self_7_43_h

#include <iostream>
#include <string>

struct NoDefault
{
   public:

   NoDefault(int i=0): factor(i)	 {   }
   
   private:
   	int factor;
};


class C
{
   public:
   	int x=2;
   C(): f(x)	 {   }
   
   private:

	NoDefault f;   	
};

#endif

#ifndef Self_7_31_h
#define Self_7_31_h

struct Y;

struct X
{
	X() = default;
	X(int a, Y *y1) : INT(a), PI(y1) {	}
	
	int a = 0;
	Y *y1 = nullptr;
}

struct Y
{
	Y() = default;
	Y(int b, X x1) : f1(b),f2(x1) {	}
	
	int b=0;
	X x1;
}

#endif

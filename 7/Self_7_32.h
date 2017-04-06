#ifndef Self_7_32_h
#define Self_7_32_h

#include <iostream>
#include <string>

using namespace std;

using ScreenIndex = std::vector<Screen>

friend class Widnow_grow
{
	void clear()
};

class Screen
{
	friend class 
	
	public: 
	   typedef std::string::size_type pos;
	   Screen() = default;
	   Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht*wd, ' ') {	   }
	   Screen( pos ht, pos wd, char c):height(ht), width(wd), contents(ht*wd, c) {	   }
	   
	   char get() const { return contents[cursor];}
	   char get(pos r, pos c) const { return contents[r*width + c]; } 
	   
	   Screen & move(pos r, pos c);
	   
	   Screen & set(char);
	   Screen & set(pos , pos , char );
	  	   
	   Screen & display(std::ostream & os)
	   {
	   	  do_display(os);
	   	  return * this;
	   }
	   
	   const Screen & display(std::ostream & os) const
	   {
	   	  do_display(os);
	   	  return * this;
	   }
	
	private:
		pos cursor = 0;
		pos height = 0, width =0;
		std::string contents;
		
		void do_display(std::ostream &os) const
		{
			cout<<contents;
		}
};

inline
Screen & Screen::move(pos r, pos c)
{
	pos row = r* width;
	cursor = row +c;
	return *this;
}

inline Screen & Screen::set(char x)
{
	contents[cursor] = x;
	return *this;
}

inline Screen & Screen::set(pos r, pos c, char x)
{
	contents[r*width + c] = x;
	return *this;
}

#endif

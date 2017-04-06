#ifndef CP5_ex7_04_h
#define CP5_ex7_04_h

#include <string>

struct Person {
    std::string name;
    std::string address;
    
	const std::string & r_name() const {return name;};
    const std::string & r_address() const {return address;};
};

std::istream &read(std::istream & is, Person & p)
{
	is >> p.name >> p.address;
	return is;
}

std::ostream &print( std::ostream & os, const Person &p)
{
	os << p.name <<" "<< p.address<<endl;
	return os;
}

#endif

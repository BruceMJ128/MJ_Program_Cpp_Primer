//
//  ex7_04.h
//  Exercise 7.4
//
//  Created by pezy on 14/11/8.
//  Copyright (c) 2014 pezy. All rights reserved.
//

#ifndef CP5_ex7_04_h
#define CP5_ex7_04_h

#include <iostream>
#include <string>

using namespace std;

struct Person;
Person Person::read(std::istream & is, Person & x);

class Person {
    Person() = default;
    Person(const string &a, const string & b) : name(a), address (b) {    }
    
    Person() : name(""), address("");
    
	std::string name;
    std::string address;
    
    Person(std::istream & is) 
	{
		read(is, *this);
    }
    
    Person Person::getname() const {return name;}
    Person Person::getaddress() const {return address;}
};

#endif

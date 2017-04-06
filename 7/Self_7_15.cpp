//
//  ex7_04.h
//  Exercise 7.4
//
//  Created by pezy on 14/11/8.
//  Copyright (c) 2014 pezy. All rights reserved.
//

#ifndef CP5_ex7_04_h
#define CP5_ex7_04_h

#include <string>

class Person {
    Person() = default;
    Person(const string &a, const string & b) : name(a), address (b) {    }
    
    Person() : name(""), address("");
    
	std::string name;
    std::string address;
};

#endif

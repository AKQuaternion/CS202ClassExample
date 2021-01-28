//
// Created by Chris Hartman on 1/26/21.
//
#include <iostream>
using std::cout;
#include "Pet.hpp"
Pet::Pet():_name("default") {
   cout << "Constructed a Pet named _default_ via default constructor.\n";
}

Pet::~Pet() {
   cout << "Destroyed a Pet named _" << _name << "_ via destructor.\n";
}

Pet::Pet(const Pet &orig):_name("copyOf"+orig._name) {
   cout << "Constructed a Pet named _" << _name << "_ via copy constructor.\n";
}

Pet::Pet(const std::string &name):_name(name) {
   cout << "Constructed a Pet named _" << _name << "_ via (const std::string &) constructor.\n";
}
std::string Pet::getName() const {
   return _name;
}

void Pet::setName(const std::string &name) {
   _name = name;
}

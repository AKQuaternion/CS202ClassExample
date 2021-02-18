//
// Created by Chris Hartman on 2/18/21.
//

#ifndef CS202CLASSEXAMPLE_RATIONAL_HPP
#define CS202CLASSEXAMPLE_RATIONAL_HPP
#include <iostream>

class Rational {
   friend std::ostream& operator<<(std::ostream &, const Rational &rhs);
   friend Rational operator+(const Rational &lhs, const Rational &rhs);
public:
   Rational(int,int=1);
   Rational & operator+=(const Rational& rhs);
private:
   int _numerator;
   int _denominator;
};


#endif//CS202CLASSEXAMPLE_RATIONAL_HPP

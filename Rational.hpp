//
// Created by Chris Hartman on 2/18/21.
//

#ifndef CS202CLASSEXAMPLE_RATIONAL_HPP
#define CS202CLASSEXAMPLE_RATIONAL_HPP
#include <iostream>

// class invariant:
// _denominator is always > 0
class Rational {
   friend std::ostream& operator<<(std::ostream &, const Rational &rhs);
   friend Rational operator+(const Rational &lhs, const Rational &rhs);
   friend Rational operator-(const Rational &lhs);
   friend bool operator==(const Rational &lhs, const Rational &rhs);
   friend bool operator<(const Rational &lhs, const Rational &rhs);

public:
   Rational(int,int=1); //NOLINT(google-explicit-constructor): Allow implicit conversion from int
   Rational & operator+=(const Rational& rhs);
   Rational & operator-=(const Rational& rhs);
   Rational & operator*=(const Rational& rhs);
   Rational & operator/=(const Rational& rhs);
   Rational & operator++();        //prefix ++
   Rational operator++(int); //postfix ++
   Rational & operator--();        //prefix --
   Rational operator--(int); //postfix --
private:
   void reduce();

   int _numerator;
   int _denominator;
};

Rational operator-(const Rational &lhs, const Rational &rhs);
Rational operator*(Rational lhs, const Rational &rhs);
Rational operator/(Rational lhs, const Rational &rhs);

bool operator!=(const Rational &lhs, const Rational &rhs);
bool operator>(const Rational &lhs, const Rational &rhs);
bool operator<=(const Rational &lhs, const Rational &rhs);
bool operator>=(const Rational &lhs, const Rational &rhs);

#endif//CS202CLASSEXAMPLE_RATIONAL_HPP

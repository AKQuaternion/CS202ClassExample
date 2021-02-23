//
// Created by Chris Hartman on 2/18/21.
//
#include <sstream>
using std::ostringstream;
#include "Rational.hpp"

#include "catch.hpp"

TEST_CASE("Rationals can be constructed and printed") {
   Rational oneHalf{1,2};
   ostringstream out;
   out << oneHalf;
   REQUIRE(out.str() == "1/2");
}

TEST_CASE("Rationals can be added with + and +="){
   Rational oneHalf{1,2};
   Rational one{1};
   Rational x = oneHalf + one;
   ostringstream out;
   out << x;
   REQUIRE(out.str() == "3/2");
   x += oneHalf;
   out.str("");
   out.clear();
   out << x;
   REQUIRE(out.str() == "8/4"); //Fix reducing fractions and outputting if denominator is 1
}

TEST_CASE("gcd works") {
   REQUIRE(gcd(5,0)==5);
   REQUIRE(gcd(0,5)==5);
   REQUIRE(gcd(7,13)==1);
   REQUIRE(gcd(16,36)==4);
}
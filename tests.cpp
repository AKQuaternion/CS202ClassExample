//
// Created by Chris Hartman on 2/18/21.
//
#include <sstream>
using std::ostringstream;
#include "Rational.hpp"
#include "catch.hpp"
#include <numeric>

TEST_CASE("Rationals can be constructed and printed") {
   Rational oneHalf{1, 2};
   ostringstream out;
   out << oneHalf;
   REQUIRE(out.str() == "1/2");
}

TEST_CASE("Rationals can be added with + and +=") {
   Rational oneHalf{1, 2};
   Rational one{1};
   Rational x = oneHalf + one;
   ostringstream out;
   out << x;
   REQUIRE(out.str() == "3/2");
   x += oneHalf;
   out.str("");
   out << x;
   REQUIRE(out.str() == "2");//Fix reducing fractions and outputting if denominator is 1
}

TEST_CASE("Rational unary -") {
   Rational minusOne{-1};
   ostringstream out;
   out << minusOne;
   REQUIRE(out.str() == "-1");
   out.str("");
   out << -minusOne;
   REQUIRE(out.str() == "1");
}

TEST_CASE("gcd works") {
   using std::gcd;
   REQUIRE(gcd(5, 0) == 5);
   REQUIRE(gcd(0, 5) == 5);
   REQUIRE(gcd(7, 13) == 1);
   REQUIRE(gcd(16, 36) == 4);
}

TEST_CASE("Rational subtraction") {
   ostringstream out;
   out << 1 - Rational{5,6};
   REQUIRE(out.str() == "1/6");
   out.str("");
   Rational x{-1};
   x -= Rational{1,2};
   out << x;
   REQUIRE(out.str() == "-3/2");
}

TEST_CASE("Rational multiplication and division") {
   ostringstream out;
   Rational x{1,-3};
   const Rational oneHalf{1,2};
   x *= oneHalf;
   out << x;
   REQUIRE(out.str()== "-1/6");
   out.str("");
   out << oneHalf*oneHalf*oneHalf;
   REQUIRE(out.str()== "1/8");
}

TEST_CASE("Comparison operators") {
   ostringstream out;
   Rational oneThird{1,3};
   Rational oneHalf{1,2};

   REQUIRE(oneHalf != oneThird);
   REQUIRE(oneHalf > oneThird);
}

TEST_CASE("increment nd decrement") {
   ostringstream out;
   Rational x{1,3};
   ++x;
   REQUIRE(x == Rational{4,3});
   --x;
   REQUIRE(x == Rational{1,3});
   x++;
   REQUIRE(x == Rational{4,3});
   x--;
   REQUIRE(x == Rational{1,3});
   REQUIRE(++x == Rational{4,3});
   REQUIRE(x++ == Rational{4,3});
   REQUIRE(x == Rational{7,3});
}

#include "SmartArray.hpp"

void foo(const SmartArray &s) {
   // cout size
}

TEST_CASE("Smart Arrays") {
SmartArray sa(10);
sa[0]=13;
REQUIRE(sa.size()==10);
REQUIRE(sa[0]==13);
const SmartArray csa(sa);
REQUIRE(csa[0]==13);
// csa[1]=5; //causes compile error
SmartArray sa2(30);
sa2 = sa;

sa2 = sa2;

foo(SmartArray(13));
sa.size();
}
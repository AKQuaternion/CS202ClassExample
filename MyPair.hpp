//
// Created by Chris Hartman on 4/6/21.
//

#ifndef CS202CLASSEXAMPLE_MYPAIR_HPP
#define CS202CLASSEXAMPLE_MYPAIR_HPP
#include <string>
#include <strstream>
#include <iostream>

template<typename First, typename Second>
class MyPair {
public:
   MyPair(First first, Second second);
   First getFirst() const;
   Second getSecond() const;
   void setFirst(First first);
   void setSecond(Second second);
//   operator std::string() {
//      std::ostringstream os;
//      os << _first << " " << _second;
//      return os.str();
//   }
   template<typename R, typename S>
   friend std::ostream & operator<<(std::ostream &os, const MyPair<R,S> &m);
private:
   First _first;
   Second _second;
};

template<typename First, typename Second>
MyPair<First,Second>::MyPair(First first, Second second) :_first(first),_second(second)
{}

template<typename First, typename Second>
First MyPair<First,Second>::getFirst() const {
   return _first;
}

template<typename First, typename Second>
Second MyPair<First,Second>::getSecond() const {
   return _second;
}

template<typename First, typename Second>
void MyPair<First,Second>::setFirst(First first) {
   _first = first;
}

template<typename First, typename Second>
void MyPair<First,Second>::setSecond(Second second) {
   _second = second;
}

template<typename First, typename Second>
MyPair<First,Second> makeMyPair(First first, Second second)
{
   MyPair<First,Second> ret{first,second};
   return ret;
}

template<typename First, typename Second>
std::ostream & operator<<(std::ostream &os, const MyPair<First,Second> &m) {
   return os << m._first << "," << m._second;
}
#endif//CS202CLASSEXAMPLE_MYPAIR_HPP

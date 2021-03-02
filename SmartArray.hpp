//
// Created by Chris Hartman on 3/2/21.
//

#ifndef CS202CLASSEXAMPLE_SMARTARRAY_HPP
#define CS202CLASSEXAMPLE_SMARTARRAY_HPP
#include <cstddef>
class SmartArray {
public:
   explicit SmartArray(int size);
   ~SmartArray();
   SmartArray(const SmartArray&);
   SmartArray & operator=(const SmartArray &orig);
   int & operator[](std::size_t index);
   const int & operator[](std::size_t index) const;
   [[nodiscard]] int size() const;

private:
   int _size;
   int * _data;
};
#endif//CS202CLASSEXAMPLE_SMARTARRAY_HPP

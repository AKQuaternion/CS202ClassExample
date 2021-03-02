//
// Created by Chris Hartman on 3/2/21.
//

#include "SmartArray.hpp"
SmartArray::SmartArray(int size) : _size(size), _data(new int[size]) {
}

SmartArray::SmartArray(const SmartArray &orig) : _size(orig._size), _data(new int[orig._size]) {
   for (int i = 0; i < _size; ++i)
      _data[i] = orig._data[i];
}

SmartArray::~SmartArray() {
   delete[] _data;
}

SmartArray &SmartArray::operator=(const SmartArray &orig) {
   if(&orig == this)
      return *this;
   delete [] _data;
   _size = orig._size;
   _data = new int [_size];
   for (int i = 0; i < _size; ++i)
      _data[i] = orig._data[i];
   return *this;
}

int &SmartArray::operator[](std::size_t index) {
   return _data[index];
}

const int &SmartArray::operator[](std::size_t index) const {
   return _data[index];
}

int SmartArray::size() const {
   return _size;
}


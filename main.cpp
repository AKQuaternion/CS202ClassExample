#include "Foo.hpp"
#include <iostream>
#include <string>
#include <vector>

using std::cout;


int main() {
  int x;
  int y;
  int *xPtr = &x;
  x = 13;
  cout << x << "\n";
  cout << xPtr << "\n";
  cout << *xPtr << "\n";
  cout << &y << "\n";
  --xPtr;
  *xPtr = 14;
  cout << y << "\n";
  cout << &xPtr << "\n";
  cout << sizeof(xPtr) << "\n";

  int array[10] = {1,2,3,4};
  int *aPtr = array;
  ++aPtr;
  cout << *aPtr << "\n";

}

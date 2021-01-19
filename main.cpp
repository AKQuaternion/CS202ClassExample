#include "Foo.hpp"
#include <iostream>

int main(int argc, const char ** argv) {
   std::cout << argc << " arguments, program name is " << argv[0] << "\n";
   Foo f;
   return 0;
}

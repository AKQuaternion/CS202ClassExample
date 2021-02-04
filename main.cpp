#include <fstream>
#include <iostream>
#include <memory>
#include <sstream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::make_shared;
using std::make_unique;
using std::move;
using std::string;
using std::unique_ptr;
using std::vector;
using std::ostream;

void output(ostream & os) {
   os << "Hello world.\n";
}

int main() {
      std::ofstream out("example.txt",std::ios::app);
      out << "Hello world.\n";
}

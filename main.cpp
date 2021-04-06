#include <iostream>
#include <optional>
using std::cin;
using std::cout;
using std::optional;
#include <string>
using std::string;
#include <random>
#include <vector>
using std::vector;
#include "MyPair.hpp"

int main() {
   MyPair<int,char> m(2,'2');
   cout << m.getFirst() << " " << m.getSecond() << "\n";
   m.setFirst(4);
   cout << m.getFirst() << " " << m.getSecond() << "\n";

   auto m2 = makeMyPair(5,'%');
   cout << m2.getFirst() << " " << m2.getSecond() << "\n";

//   cout << string(m2) << "\n";
   cout << m2;
   return 0;
}
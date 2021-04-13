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
#include <algorithm>
using std::begin;
using std::end;
using std::pair;
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <random>
#include <string>
#include <utility>
#include <vector>
#include <map>
using std::unordered_map;
using std::map;
using std::begin;
using std::cout;
using std::end;
using std::endl;
using std::pair;
using std::sort;
using std::string;
using std::vector;

void printVector(const vector<int> &v) {
   std::copy(begin(v), end(v), std::ostream_iterator<int>(cout, " "));
   cout << "\n";
}

void buggyRemove1s(vector<int> &v) {
   for (auto i = begin(v); i < end(v); ++i) {
      while (i != end(v) && *i == 1)
         i=v.erase(i);
   }
}

// 1 1 2 2 5 5 1 1 6 7 1
// 2 2 5 5 6 7 1 1 6 7 1
//             ^

int main() {
   vector v({1, 1, 2, 2, 5, 5, 1, 1, 6, 7, 1});
   printVector(v);
   v.erase(std::remove(begin(v),end(v),1),end(v));
   printVector(v);

   vector<int> newVector(v.size());
   auto nnEnd = copy_if(begin(v),end(v),begin(newVector),[](int i){return i%2==0;});
   newVector.erase(nnEnd,end(newVector));
   printVector(newVector);
//   unordered_map<string,int> m;
//   m["word"] = 13;
//   cout << m["word"] << "\n";

   vector<int> better;
   copy_if(begin(v),end(v),std::back_inserter(better),[](int i){return i%2==0;});
   printVector(better);

   better.erase(std::unique(begin(better),end(better)),end(better));
   printVector(better);
   // map works on anything that has operator<
   // unordered_map works on built in types, strings, and pointers (all kinds)
   return 0;
}

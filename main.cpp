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
#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <map>
#include <numeric>
#include <random>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
using std::begin;
using std::cout;
using std::end;
using std::endl;
using std::map;
using std::pair;
using std::sort;
using std::string;
using std::unordered_map;
using std::vector;

using Rod = vector<int>;
using Puzzle = std::array<Rod, 3>;

void showPuzzle(const Puzzle &p) {
   for(const auto &rod:p) {
      cout << "--";
      for (auto i : rod)
         cout << i << "-";
      cout << "\n";
   }
   cout << "\n";
}

void hanoi(int n, int from, int to, Puzzle &puzzle) {
   if (n == 0)
      return;
   auto other = 3-from-to;

   hanoi(n-1,from,other,puzzle);

   auto disc = puzzle[from].back();
   puzzle[from].pop_back();
   puzzle[to].push_back(disc);
   cout << "Moved disc " << disc << " from rod " << from << " to rod " << to << "\n";
   showPuzzle(puzzle);

   hanoi(n-1,other,to,puzzle);
}

template <typename Iterator>
void printReversed(Iterator theBegin, Iterator theEnd){

}

int factorial(int n)
{
   if (n==0)
      return 1;
   else
      return n*factorial(n-1);
}

int binarySearch(const vector<int> &v, int key, int theBeg, int theEnd) {
   while(true) {
      if (theEnd == theBeg)
         return -1;
      int mid = (theBeg + theEnd) / 2;
      if (v[mid] == key)
         return mid;
      if (v[mid] < key)
         theBeg = mid;
      else
         theEnd = mid;
   }
}

void printDigitsReversed(int n) {
if(n==0)
   return;
cout << n%10;
printDigitsReversed(n/10);
}

int main() {
//   vector<int> primes{2,3,5,7,11,13,17};
//   cout << binarySearch(primes,11,0,primes.size());
//printDigitsReversed(12345);
//   cout << factorial(5) << "\n";
//   string s("Hello World!");
//   printReversed(begin(s),end(s));
//   cout << "\n";
//   vector<int> primes{2,3,5,7,11,13,17};
//   printReversed(begin(primes),end(primes));
//   cout << "\n";
//
   const int N = 4;
   Puzzle p;
   p[0].resize(N);
   std::iota(p[0].rbegin(),p[0].rend(),1);
   showPuzzle(p);
   hanoi(N,0,1,p);
   return 0;
}

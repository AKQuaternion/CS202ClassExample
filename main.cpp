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

void print(const vector<pair<int,char>>& v) {
   for(auto [i,c]:v)
      cout << "(" << i << "," << c << ") ";
   cout << "\n";
}

int main() {
   vector<int> v{1,3,5,7,9,8,6,4,2};
   cout << "The first even integer is " <<
         *std::find_if(begin(v),end(v),[](int x){return x%2==0;});

   cout << "\n";
   vector<pair<int,char>> vp{{1,'z'},{1,'a'},{3,'x'},{2,'y'}};
   print(vp);
   sort(begin(vp),end(vp));
   print(vp);
   sort(begin(vp),end(vp),[](auto a, auto b) {return a.second < b.second;});
   print(vp);
   return 0;
}
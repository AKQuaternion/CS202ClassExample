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

template<typename T>
void printVector(const vector<T> &v) {
   for(const T &i:v)
      cout << i << " ";
   cout << "\n";
}

template<typename R, typename S>
void printTwo(R r, S s){
   cout << r << " " << s << "\n";
}

template<typename X>
X square(X x) {
      return x*x;
};

float square(float f) {
   cout << "I don't like floats!\n";
   return f*f;
}

int main() {
   vector<double> v{1.1,2.2,3.3,6.6,5.5,4.4};
   printVector(v);
   std::sort(v.begin(),v.end());
   printVector(v);

   vector<char> x{'a','b','c'};
   printVector(x);

   printTwo("hello",14.156);

   cout << square(4) << "\n";
   cout << square(4.5) << "\n";
   cout << square(13.3f) << "\n";

   int h;
   cout << &h << "\n";
   auto s = "hello";
   cout << s << "\n";
   return 0;
}
#include <iostream>
using std::cout;
using std::endl;
using std::ostream;

class Foo { // in Foo.hpp
   friend ostream & operator<<(ostream &os, const Foo &f);
public:
   Foo(int x) : _x(x) {}
   static double getD() {return _d;}
   static void setD(double newd) {
      _d=newd;
   }

private:
   int _x;
   static double _d; //in Foo.hpp
};

//in Foo.cpp
double Foo::_d=0.0;

ostream & operator<<(ostream &os, const Foo &f) {
   return os << "This is a Foo: " << f._x;
}

int main() {

   cout << "The current value of Foo::_d is " << Foo::getD()  << endl;
   Foo f(13);
   cout << f << endl;
   Foo g(12);

//   f.setD(6.6);
//   g.setD(7.7);
//   cout << f.getD() << endl;
   return 0;
}




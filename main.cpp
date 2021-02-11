#include <iostream>
using std::cout;
using std::endl;
using std::ostream;

class Foo {
   friend ostream & operator<<(ostream &os, const Foo &f);
public:
   Foo(int x) : _x(x) {}
private:
   int _x;
};

ostream & operator<<(ostream &os, const Foo &f) {
   return os << "This is a Foo: " << f._x;
}

int main() {
   Foo f(13);
   cout << f;
   return 0;
}




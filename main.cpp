#include <iostream>
#include <optional>
using std::cout;
using std::cin;
using std::optional;
#include <string>
using std::string;

class Shape {
public:
   Shape(const string &color) : _color(color)
   {}
   string getColor() const {
      return _color;
   }
   void setColor(const string &newColor) {
      _color = newColor;
   }
   void describe() {
      cout << "I am a base class Shape.\n";
   }
private:
   string _color;
};

class Circle : public Shape {
public:
   using Shape::Shape;

   Circle(double radius) : Shape("Turquoise"),_radius(radius)
   {}
   double getRadius() const {
      return _radius;
   }
   void setRadius(double newRadius) {
      _radius = newRadius;
   }
   void describe() {
      cout << "I am a Circle.\n";
   }
private:
   double _radius;
};

int main() {
   Shape s("Red");
   cout << s.getColor() << "\n";

   s.setColor("Green");
   cout << s.getColor() << "\n";

   Circle c(13.3);
   c.setRadius(5.4);

   Circle anotherCircle("Pink");

   c.setColor("Chartreuse");

   cout << c.getColor() << "\n";

   c.describe();
   s.describe();
   return 0;
}
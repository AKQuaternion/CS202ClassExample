#include <iostream>
#include <optional>
using std::cin;
using std::cout;
using std::optional;
#include <string>
using std::string;
#include <random>

class Shape {
public:
   explicit Shape(const string &color) : _color(color) {}
   [[nodiscard]] string getColor() const {
      return _color;
   }
   void setColor(const string &newColor) {
      _color = newColor;
   }
   virtual void describe() const = 0;
   virtual ~Shape() = default;

private:
   string _color;
};

class Circle : public Shape {
public:
   using Shape::Shape;

   explicit Circle(double radius) : Shape("Turquoise"), _radius(radius) {}
   double getRadius() const {
      return _radius;
   }
   void setRadius(double newRadius) {
      _radius = newRadius;
   }
   void describe() const override {
      // describe is virtual in the base class, so it
      // is virtual here. You do not need to repeat the virtual keyword. But you
      // should use the "override" as above. This will let the compiler warn you
      // if you do something wrong. What happens if you make the above function
      // const (as it really should be!?)
      cout << "I am a Circle.\n";
   }

private:
   double _radius{};
};

class Square : public Shape {
public:
   using Shape::Shape;

   explicit Square(double sideLength) : Shape("Turquoise"), _sideLength(sideLength) {}
   [[nodiscard]] double getSideLength() const {
      return _sideLength;
   }
   void setSideLength(double sideLength) {
      _sideLength = sideLength;
   }
   void describe() const override {
      cout << "I am a Square.\n";
   }

private:
   double _sideLength;
};


std::unique_ptr<Shape> getShape(char c) {
   static std::random_device r;
   static std::default_random_engine e1(r());
   static std::uniform_int_distribution<int> flip(0, 1);

   switch (c) {
      case 's':
      case 'S':// square
         return std::make_unique<Square>("Red");
      case 'c':
      case 'C':// circle
         return std::make_unique<Circle>("Red");
      case 'r':
      case 'R':// random
         if (flip(e1) == 0)
            return std::make_unique<Square>("Red");
         else
            return std::make_unique<Circle>("Red");
      default:
         throw std::runtime_error("Bad character parameter in getShape(c)");
   }
}

int main() {
   //   Square s("Red");
   ////   cout << s.getColor() << "\n";
   //
   //   s.setColor("Green");
   ////   cout << s.getColor() << "\n";
   //
   //   Circle c(13.3);
   //   c.setRadius(5.4);
   //
   //   Circle anotherCircle("Pink");
   //
   //   c.setColor("Chartreuse");
   //
   ////   cout << c.getColor() << "\n";
   //
   ////   c.describe();
   ////   s.describe();

   auto shapePtr = getShape('r');
   shapePtr->describe();
   return 0;
}